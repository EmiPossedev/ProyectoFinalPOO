/// Includes para la implementacion de la clase Consultorio
#include "Consultorio.h"
#include "Persona.h"
#include "Paciente.h"
#include "Kinesiologo.h"
#include "Fecha.h"
#include "Utils.h"
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <iostream>
#include <algorithm> // para que funcione el sort
#include <cctype>    // para usar el toupper transformar en mayusculas para filtrar por nombre
using namespace std;

Consultorio::Consultorio(string nombreArchivoPacientes, string nombreArchivoKinesiologos, string nombreArchivoTurnos){
	cargarPacientes(nombreArchivoPacientes);
	cargarKinesiologos(nombreArchivoKinesiologos);
	cargarTurnos(nombreArchivoTurnos);
}

// METODO DESTRUCTOR
Consultorio::~Consultorio()
{
    for (size_t i = 0; i < kinesiologos.size(); i++)
    {
        delete kinesiologos[i];
    }

    for (size_t i = 0; i < pacientes.size(); i++)
    {
        delete pacientes[i];
    }
}

// FUNCIONES AUXILIARES
// Compara si coincide un turno con una fecha
bool coincide(const Turno &turno, const Fecha &fecha)
{
    return turno.fecha == fecha;
}
// Compara si coincide un turno con el string que puede ser el nombre del kinesiologo o la hora
bool coincide(const Turno &turno, const string &valor)
{
	//  O coincide la hora
	if (turno.hora == valor) return true;
	
	// O coincide el dni del Kinesi�logo
	if (to_string(turno.dniKinesiologo) == valor) return true;
	
	return false;
}

/// METODO PARA OBTENER LA CANTIDAD DE DATOS
size_t Consultorio::getCantPacientes() const
{
	return pacientes.size();
}

size_t Consultorio::getCantKinesiologos() const
{
	return kinesiologos.size();
}

size_t Consultorio::getCantTurnos() const
{
	return pacientes.size();
}

/// METODOS BASICOS PARA AGREGAR/MODIFICAR DATOS

// Metodos BA�SICOS para KINESIOLOGOS
void Consultorio::agregarKinesiologo(Kinesiologo *kinesiologo)
{
    kinesiologos.push_back(kinesiologo);
}

vector<Kinesiologo *> Consultorio::getKinesiologos() const
{
    return kinesiologos;
}

// Métodos BÁSICOS para PACIENTES
void Consultorio::agregarPaciente(Paciente *paciente)
{
    pacientes.push_back(paciente);
}

vector<Paciente *> Consultorio::getPacientes() const
{
    return pacientes;
}

// METODOS PARA LOS TURNOS(buscar, consultar, agregar, cancelar, reprogramar, ordenar)
// MEtodo para obtener los turnos
vector<Turno> Consultorio::getTurnos() const
{
    return turnos;
}

// Agregar un turno
void Consultorio::agregarTurno(const Turno &turno)
{
    turnos.push_back(turno);
}
// Cancelar un turno
void Consultorio::cancelarTurno(const string &dniPacienteBuscado, const Fecha &fecha, const string &hora)
{
    for (auto it = turnos.begin(); it != turnos.end(); it++)
    {
        // sobrecargamos el operator==
        if (it->dniPaciente == dniPacienteBuscado && it->fecha == fecha && it->hora == hora)
        {
            turnos.erase(it);
            return;
        }
    }
}

// Reprogramar un turno
void Consultorio::reprogramarTurno(const string &dniPacienteBuscado, const string &horaVieja, const Fecha &fechaVieja, const Fecha &fechaNueva, const string &horaNueva)
{
    for (auto &turno : turnos)
    {
        // Buscar el turno original
        if (turno.dniPaciente == dniPacienteBuscado && turno.fecha == fechaVieja && turno.hora == horaVieja)
        {
            if (!verificarDisponibilidadKinesiologo(turno.dniKinesiologo, fechaNueva, horaNueva))
            {
                cout << "Error: El kinesiologo " << turno.dniKinesiologo << " ya tiene un turno a esa hora nueva." << endl;
                return;
            }

            if (turno.requiereCamilla)
            {
                if (!verificarDisponibilidadCamilla(fechaNueva, horaNueva))
                {
                    cout << "Error: No hay camillas disponibles en el nuevo horario." << endl;
                    return;
                }
            }
            if (turno.requiereGimnasio)
            {
                if (!verificarDisponibilidadGimnasio(fechaNueva, horaNueva))
                {
                    cout << "Error: El gimnasio esta lleno en el nuevo horario." << endl;
                    return;
                }
            }

            // Actualización de datos
            turno.fecha = fechaNueva;
            turno.hora = horaNueva;
            turno.estadoDelTurno = "Reprogramado";

            cout << "El turno se logro reprogramar" << endl;
            return;
        }
    }

    cout << "Error" << endl;
}

// Ordenar los turnos
void Consultorio::ordenarTurnos()
{
    sort(turnos.begin(), turnos.end());
}

/// METODOS PARA VERIFICAR DISPONIBILIDAD DE LOS RECURSOS

// Disponibilidad del Kinesiologo
bool Consultorio::verificarDisponibilidadKinesiologo(const int &dniKine, const Fecha &fecha, const string &hora)
{
    for (const auto &turno : turnos)
    {
        if (turno.dniKinesiologo == dniKine && turno.fecha == fecha && turno.hora == hora)
        {
            if (turno.estadoDelTurno != "Cancelado")
            {
                return false;
            }
        }
    }
    return true;
}

// Disponibilidad de Camillas
bool Consultorio::verificarDisponibilidadCamilla(const Fecha &fecha, const string &hora)
{
    int camillasOcupadas = 0;
    for (const auto &turno : turnos)
    {
        if (turno.fecha == fecha && turno.hora == hora && turno.requiereCamilla && turno.estadoDelTurno != "Cancelado")
        {
            camillasOcupadas++;
        }
    }
    if (camillasOcupadas < cantCamillas)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Disponibilidad del Gimnasio
bool Consultorio::verificarDisponibilidadGimnasio(const Fecha &fecha, const string &hora)
{
    int gimnasioOcupado = 0;

    for (const auto &turno : turnos)
    {
        if (turno.fecha == fecha && turno.hora == hora && turno.requiereGimnasio && turno.estadoDelTurno != "Cancelado")
        {
            gimnasioOcupado++;
        }
    }

    if (gimnasioOcupado < capacidadGimnasio)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// MÉTODOS DE BÚSQUEDA Y FILTRADO para Kinesios y Pacientes por nombre y apellido

vector<Paciente *> Consultorio::filtrarPorNombreApellidoPaciente(const string &nombre, const string &apellido)
{
    // Transformo el nombre a mayusculas para poder comparar los nombres sin importar mayúsculas o minúsculas
    string nombreBuscado = nombre;                                                           // tuve que hacer una copia porque sino me modificaba el string original
    transform(nombreBuscado.begin(), nombreBuscado.end(), nombreBuscado.begin(), ::toupper); // tuve que ver un video de youtube de un loco para entender como hacer esto
    string apellidoBuscado = apellido;
    transform(apellidoBuscado.begin(), apellidoBuscado.end(), apellidoBuscado.begin(), ::toupper); // lo mismo para el apellido

    vector<Paciente *> encontrados;

    for (Paciente *p : pacientes)
    {
        string nombreActual = p->getNombre();
        transform(nombreActual.begin(), nombreActual.end(), nombreActual.begin(), ::toupper);
        string apellidoActual = p->getApellido();
        transform(apellidoActual.begin(), apellidoActual.end(), apellidoActual.begin(), ::toupper);
        if (nombreBuscado == nombreActual && apellidoBuscado == apellidoActual)
        {
            encontrados.push_back(p);
        }
    }
    return encontrados;
}

vector<Kinesiologo *> Consultorio::filtrarPorNombreApellidoKinesiologo(const string &nombre, const string &apellido)
{
    // Transformo el nombre a mayúsculas para poder comparar los nombres sin importar mayúsculas o minúsculas
    string nombreBuscado = nombre;                                                           // tuve que hacer una copia porque sino me modificaba el string original
    transform(nombreBuscado.begin(), nombreBuscado.end(), nombreBuscado.begin(), ::toupper); // tuve que ver un video de youtube de un loco para entender como hacer esto
    string apellidoBuscado = apellido;
    transform(apellidoBuscado.begin(), apellidoBuscado.end(), apellidoBuscado.begin(), ::toupper); // lo mismo para el apellido

    vector<Kinesiologo *> encontrados;
    for (Kinesiologo *k : kinesiologos)
    {
        string nombreActual = k->getNombre();
        transform(nombreActual.begin(), nombreActual.end(), nombreActual.begin(), ::toupper);
        string apellidoActual = k->getApellido();
        transform(apellidoActual.begin(), apellidoActual.end(), apellidoActual.begin(), ::toupper);
        if (nombreBuscado == nombreActual && apellidoBuscado == apellidoActual)
        {
            encontrados.push_back(k);
        }
    }
    return encontrados;
}

/// METODOS DE BUSQUEDA POR DNI
Kinesiologo *Consultorio::buscarKinesiologoPorDni(const int &dniBuscado)
{
    for (Kinesiologo *k : kinesiologos)
    {
        if (k->getDni() == to_string(dniBuscado))
        {
            return k;
        }
    }
    return nullptr;
}

Paciente *Consultorio::buscarPacientePorDni(const string &dniBuscado)
{

    for (Paciente *p : pacientes)
    {
        if (p->getDni() == dniBuscado)
        {
            return p;
        }
    }
    return nullptr; // si no se encontró al paciente devuelvo el nullptr
}

/// METODOS PARA OBTENER LOS NOMBRES Y APELLIDOS DE LOS KINESIOLOGOS
string Consultorio::getNombreKinesiologo(int dni) {
	
	Kinesiologo* k = buscarKinesiologoPorDni(dni);
	if (k != nullptr) {
		return k->getNombre(); // Retorno el nombre
	}
	return "Desconocido";
}
string Consultorio::getApellidoKinesiologo(int dni) {
	
	Kinesiologo* k = buscarKinesiologoPorDni(dni);
	if (k != nullptr) {
		return k->getApellido(); // Retorno el apellido
	}
	return "Desconocido";
}
/// METODOS PARA OBTENER LOS NOMBRES Y APELLIDOS DE LOS PACIENTES
string Consultorio::getNombrePaciente(string dni) {
	
	Paciente* p = buscarPacientePorDni(dni);
	if (p != nullptr) {
		return p->getNombre();
	}
	return "Desconocido";
}

string Consultorio::getApellidoPaciente(string dni) {
	
	Paciente* p = buscarPacientePorDni(dni);
	if (p != nullptr) {
		return p->getApellido();
	}
	return "Desconocido";
}

// METODOS DE BUSQUEDA POR ID (indice en el vector)
Kinesiologo *Consultorio::buscarKinesiologoPorInd(size_t ind)
{
    if (ind < kinesiologos.size())
    {
        return kinesiologos[ind];
    }
    return nullptr;
}

Paciente *Consultorio::buscarPacientePorInd(size_t ind)
{
    if (ind < pacientes.size())
    {
        return pacientes[ind];
    }
    return nullptr;
}

/// METODOS PARA KINESIOLOGOS

/* LOS DEJO COMENTADOS PORQUE EL ÚNICO QUE VAMOS A UTILIZAR ES POR DNI, PERO ESTOS SON LOS MÉTODOS
SI QUISIÉSEMOS BUSCAR POR NOMBRE
Paciente *Consultorio::buscarPacientePorNombre(const string &nombre)
{
    for (Paciente *p : pacientes)
    {
        if (p->getNombre() == nombre)
        {
            return p;
        }
    }
    return nullptr;
}
Paciente *Consultorio::buscarPacientePorApellido(const string &apellido)
{
    for (Paciente *p : pacientes)
    {
        if (p->getApellido() == apellido)
        {
            return p;
        }
    }
    return nullptr;
}
Kinesiologo *Consultorio::buscarKinesiologoPorNombre(const string &nombre)
{
    for (Kinesiologo *k : kinesiologos)
    {
        if (k->getNombre() == nombre)
        {
            return k;
        }
    }
    return nullptr;
}
Kinesiologo *Consultorio::buscarKinesiologoPorApellido(const string &apellido)
{
    for (Kinesiologo *k : kinesiologos)
    {
        if (k->getApellido() == apellido)
        {
            return k;
        }
    }
    return nullptr;
}
*/

// MÉTODOS DE ELIMINACIÓN de pacientes y kinesiologos de los vectores de Consultorio

// Paciente con pago pendiente
vector<Paciente *> Consultorio::getPacientesConPagoPendiente() const
{
    vector<Paciente *> deudores;
    for (Paciente *p : pacientes)
    {
        if (!p->getSesionesPagas())
        {
            deudores.push_back(p);
        }
    }
    return deudores;
}

/// MÉTODOS DE ARCHIVOS BINARIOS

// Metodo para guardar/cargar los pacientes en un archivo binario
void Consultorio::guardarPacientes(const string &nombreArchivo)
{
    ofstream bin(nombreArchivo, ios::binary | ios::trunc); // la banderea trunc nos va a ayudar a que no se dupliquen los pacientes guardados en el vector
    if (!bin.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo pacientes para escritura.");
    }

    for (size_t i = 0; i < pacientes.size(); i++)
    {
        RegistroPaciente RegPaciente;

        strncpy(RegPaciente.nombre, pacientes[i]->getNombre().c_str(), 59);
        strncpy(RegPaciente.apellido, pacientes[i]->getApellido().c_str(), 59);
        strncpy(RegPaciente.dni, pacientes[i]->getDni().c_str(), 15);
        strncpy(RegPaciente.diagnostico, pacientes[i]->getDiagnostico().c_str(), 99);
        strncpy(RegPaciente.observaciones, pacientes[i]->getObservaciones().c_str(), 199);
        strncpy(RegPaciente.obraSocial, pacientes[i]->getObraSocial().c_str(), 49);
        strncpy(RegPaciente.telefono, pacientes[i]->getTelefono().c_str(), 19);
        RegPaciente.fechaDeInicio = pacientes[i]->getFechaDeInicio();
        RegPaciente.cantSesionesTotales = pacientes[i]->getCantSesionesTotales();
        RegPaciente.cantSesionesRealizadas = pacientes[i]->getCantidadSesionesRealizadas();
        RegPaciente.sesionesPagas = pacientes[i]->getSesionesPagas();

        bin.write(reinterpret_cast<char *>(&RegPaciente), sizeof(RegistroPaciente));
    }
    bin.close();
    cout << "Pacientes guardados." << endl;
}

void Consultorio::cargarPacientes(const string &nombreArchivo)
{
    ifstream bin(nombreArchivo, ios::binary); // <--- Usamos ifstream es más seguro
    if (!bin.is_open())
        return; // Si no existe, no es error critico, solo no carga nada

    // Primero limpiamos la memoria por las dudas
    for (auto p : pacientes)
        delete p;
    pacientes.clear();

    RegistroPaciente RegPaciente;
    while (bin.read(reinterpret_cast<char *>(&RegPaciente), sizeof(RegistroPaciente)))
    {
	// Implement� las modificaciones que me di� el profe Cesar
	Paciente *p = new Paciente(
		string(RegPaciente.nombre),
		string(RegPaciente.apellido),
		string(RegPaciente.telefono),
		string(RegPaciente.dni),
		RegPaciente.fechaDeInicio,
		string(RegPaciente.diagnostico),
		string(RegPaciente.obraSocial),
		RegPaciente.cantSesionesTotales,
		RegPaciente.cantSesionesRealizadas,
		string(RegPaciente.observaciones),
		RegPaciente.sesionesPagas
		);
		pacientes.push_back(p);
    }
    bin.close();
    cout << "Pacientes cargados: " << pacientes.size() << endl;
}
// guardarKinesiologos / cargarKinesiologos
void Consultorio::guardarKinesiologos(const string &nombreArchivo)
{
    ofstream bin(nombreArchivo, ios::binary | ios::trunc);
    if (!bin.is_open())
    {
        cout << "Error al abrir archivo Kinesiologos para escritura." << endl;
        return;
    }
    for (size_t i = 0; i < kinesiologos.size(); i++)
    {
        RegistroKinesiologo RegKinesio;

        // Transformamos todo para poder guardarlo en archivo binario
        strncpy(RegKinesio.nombre, kinesiologos[i]->getNombre().c_str(), 59);
        strncpy(RegKinesio.apellido, kinesiologos[i]->getApellido().c_str(), 59);
        strncpy(RegKinesio.especialidad, kinesiologos[i]->getEspecialidad().c_str(), 99);
        strncpy(RegKinesio.telefono, kinesiologos[i]->getTelefono().c_str(), 19);
        strncpy(RegKinesio.dni, kinesiologos[i]->getDni().c_str(), 15);
        RegKinesio.matricula = kinesiologos[i]->getMatricula();
        RegKinesio.cantidadPacientesAtendidos = kinesiologos[i]->getCantidadPacientesAtendidos();

        bin.write(reinterpret_cast<char *>(&RegKinesio), sizeof(RegistroKinesiologo));
    }
    bin.close();
}

void Consultorio::cargarKinesiologos(const string &nombreArchivo)
{
    ifstream bin(nombreArchivo, ios::binary);
    if (!bin.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo kinesiólogos para lectura.");
    }

    // Primero limpio mi vector, y lo vuelvo a cargar
    for (Kinesiologo *k : kinesiologos)
    {
        delete k;
    }
    kinesiologos.clear();

    RegistroKinesiologo RegKinesio;
    while (bin.read(reinterpret_cast<char *>(&RegKinesio), sizeof(RegistroKinesiologo)))
    {
		// Implement� las modificaciones que me di� el profe Cesar
		Kinesiologo *k = new Kinesiologo(
			string(RegKinesio.nombre),
			string(RegKinesio.apellido),
			string(RegKinesio.telefono),
			string(RegKinesio.dni),
			RegKinesio.matricula,
			string(RegKinesio.especialidad),
			RegKinesio.cantidadPacientesAtendidos
		);
		kinesiologos.push_back(k);
    }
    bin.close();
    cout << "Kinesiologos cargados: " << kinesiologos.size() << endl;
}
// guardarTurnos / cargarTurnos

// guardarTodosDatos / cargarTodosDatos
void Consultorio::guardarTurnos(const string &nombreArchivo)
{
    ofstream bin(nombreArchivo, ios::binary | ios::trunc);
    if (!bin.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo de turnos para escritura.");
    };

    for (const auto &t : turnos)
    {
        RegistroTurno reg;
		// Guardo los dnis del paciente y el kinesiologo
		reg.dniKinesiologo = t.dniKinesiologo;
		strncpy(reg.dniPaciente, t.dniPaciente.c_str(), 15);
        reg.fecha = t.fecha;
        strncpy(reg.hora, t.hora.c_str(), 9);
        strncpy(reg.estadoDelTurno, t.estadoDelTurno.c_str(), 19);
        strncpy(reg.observaciones, t.observaciones.c_str(), 199);
        reg.requiereCamilla = t.requiereCamilla;
        reg.requiereGimnasio = t.requiereGimnasio;

        bin.write(reinterpret_cast<char *>(&reg), sizeof(RegistroTurno));
    }
    bin.close();
}

void Consultorio::cargarTurnos(const string &nombreArchivo)
{
    ifstream bin(nombreArchivo, ios::binary);
    if (!bin.is_open())
    {
        throw runtime_error("No se pudo abrir el archivo para lectura");
    }

    turnos.clear(); // Limpiamos vector (como son structs, no hace falta delete)

    RegistroTurno reg;
    while (bin.read(reinterpret_cast<char *>(&reg), sizeof(RegistroTurno)))
    {
        Turno t;
        t.dniKinesiologo = reg.dniKinesiologo;
        t.dniPaciente= reg.dniPaciente;
        t.fecha = reg.fecha;
        t.hora = reg.hora;
        t.estadoDelTurno = reg.estadoDelTurno;
        t.observaciones = reg.observaciones;
        t.requiereCamilla = reg.requiereCamilla;
        t.requiereGimnasio = reg.requiereGimnasio;

        turnos.push_back(t);
    }
    bin.close();
}

void Consultorio::guardarTodosDatos()
{
    guardarPacientes("pacientes.dat");
    guardarKinesiologos("kinesiologos.dat");
    guardarTurnos("turnos.dat");
    cout << "Todos los datos han sido guardados." << endl;
}

void Consultorio::cargarTodosDatos()
{
    cargarPacientes("pacientes.dat");
    cargarKinesiologos("kinesiologos.dat");
    cargarTurnos("turnos.dat");
}

/// FUNCIONES PARA VACIAR LOS DATOS

// Eliminar un paciente por DNI del vector y del archivo binario
void Consultorio::eliminarPacientePorDni(const string &dniKine)
{
    for (auto it = pacientes.begin(); it != pacientes.end(); ++it)
    {
        if ((*it)->getDni() == dniKine)
        {
            delete *it;
            pacientes.erase(it);
            guardarPacientes("pacientes.dat");
            cout << "Paciente eliminado y archivo actualizado." << std::endl;
            return;
        }
    }
    cout << "No se encontró paciente con ese DNI." << std::endl;
}
// Borra todos los pacientes y libera memoria
void Consultorio::borrarPacientes()
{
    for (size_t i = 0; i < pacientes.size(); ++i)
    {
        delete pacientes[i];
    }
    pacientes.clear();
    // Vaciar archivo binario de pacientes
    ofstream bin("pacientes.dat", std::ios::binary | std::ios::trunc);
    bin.close();
    cout << "Archivo de pacientes vaciado correctamente." << std::endl;
}

// Eliminar un kinesiologo por DNI del vector y del archivo binario
void Consultorio::eliminarKinesiologoPorDni(const string &dniKine)
{
    for (auto it = kinesiologos.begin(); it != kinesiologos.end(); ++it)
    {
        if ((*it)->getDni() == dniKine)
        {
            delete *it;
            kinesiologos.erase(it);
            guardarKinesiologos("kinesiologos.dat");
            return;
        }
    }
    cout << "No se encontró kinesiologo con ese DNI." << endl;
}
// Borra todos los kinesiologos y libera memoria
void Consultorio::borrarKinesiologos()
{
    for (size_t i = 0; i < kinesiologos.size(); ++i)
    {
        delete kinesiologos[i];
    }
    kinesiologos.clear();
    // Vaciar archivo binario de kinesiologos
    ofstream bin("kinesiologos.dat", std::ios::binary | std::ios::trunc);
    bin.close();
    cout << "Archivo de kinesiologos vaciado correctamente." << std::endl;
}

// Eliminar un turno por dni de paciente, fecha y hora, y actualizar archivo binario
void Consultorio::eliminarTurno(const string &dniPacienteBuscado, const Fecha &fecha, const string &hora)
{
    for (auto it = turnos.begin(); it != turnos.end(); ++it)
    {
        if (it->dniPaciente == dniPacienteBuscado && it->fecha == fecha && it->hora == hora)
        {
            turnos.erase(it);
            guardarTurnos("turnos.dat");
            cout << "Turno eliminado y archivo actualizado." << endl;
            return;
        }
    }
    cout << "No se encontr� turno con esos datos." << endl;
}
// Borra todos los turnos
void Consultorio::borrarTurnos()
{
    turnos.clear();
    // Vaciar archivo binario de turnos
    ofstream bin("turnos.dat", std::ios::binary | std::ios::trunc);
    bin.close();
    cout << "Archivo de turnos vaciado correctamente." << std::endl;
}
