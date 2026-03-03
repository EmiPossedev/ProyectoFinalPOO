#ifndef CONSULTORIO_H
#define CONSULTORIO_H
#include "Fecha.h"
#include "Persona.h"
#include "Kinesiologo.h"
#include "Paciente.h"
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

// Este struct sirve para guardar en archivo binario (usando char)
struct RegistroTurno
{
    char dniPaciente[16];
	int dniKinesiologo;
    Fecha fecha;             // Usamos el struct Fecha definido en Fecha.h
    char hora[10];           // Formato HH:MM
    char estadoDelTurno[20]; // Programado, Cancelado, Completado
    bool requiereCamilla;
    bool requiereGimnasio;
    char observaciones[200];
};

// Y este struct Turno me deja trabajar los datos en memoria
struct Turno
{
    string dniPaciente;
	int dniKinesiologo;
    Fecha fecha;
    string hora; // Formato HH:MM
    bool requiereCamilla;
    bool requiereGimnasio;
    string estadoDelTurno; // Programado, Cancelado, Completado
    string observaciones;

    // Necesitamos esto para que ordenarTurnos() pueda hacer la comparacion
    // Como ahora fecha ya sabe compararse sola
    bool operator<(const Turno &Turno) const
    {
        if (fecha != Turno.fecha)
        {
            return fecha < Turno.fecha; // Usa la la logica de fecha.h
        }
        return hora < Turno.hora; // Si es el mismo dia, desempata por hora
    }
};

/// FUNCIONES AUXILIARES PARA PODER COMPARAR TURNOS POR FECHA, POR HORA Y POR KINESIOLOGOS
// Compara si un turno coincide con una fecha
bool coincide(const Turno &turno, const Fecha &fecha);
// Compara si un turno coincide con un string como Nombrekinesio o Hora
bool coincide(const Turno &turno, const string &valor);

/// Definicion de la clase Consultorio
class Consultorio
{

private:
    vector<Kinesiologo *> kinesiologos;
    vector<Paciente *> pacientes;
    vector<Turno> turnos;
    int cantCamillas = 5;
    int capacidadGimnasio = 5;

public:
    // Metodo constructor y metodo destructor
    Consultorio() {}
	Consultorio(string nombreArchivoPacientes, string nombreArchivoKinesiologos, string nombreArchivoTurnos);
    ~Consultorio();
    // Metodos para agregar/obtener kinesiologos
    void agregarKinesiologo(Kinesiologo *kinesiologo);
    vector<Kinesiologo *> getKinesiologos() const;
	size_t getCantKinesiologos() const;
	string getNombreKinesiologo(int dni);
	string getApellidoKinesiologo(int dni);

    // Metodos para agregar/obtener pacientes
    void agregarPaciente(Paciente *paciente);
    vector<Paciente *> getPacientes() const;
	size_t getCantPacientes() const;
	string getNombrePaciente(string dni);
	string getApellidoPaciente(string dni);
	
    // Metodos para borrar todos los pacientes, turnos y kinesiologos
    void borrarPacientes();
    void borrarTurnos();
    void borrarKinesiologos();

    // Metodos para la gestion de los turnos
    vector<Turno> getTurnos() const;
	size_t getCantTurnos() const;
    void agregarTurno(const Turno &turno);
    void cancelarTurno(const string &nombrePaciente, const Fecha &fecha, const string &hora);
    void reprogramarTurno(const string &dniPacienteBuscado, const string &horaVieja, const Fecha &fechaVieja, const Fecha &fechaNueva, const string &horaNueva);
    void ordenarTurnos();
	void actualizarTurno(Turno turnoViejo, Turno turnoNuevo); // Actualiza un turno existente con nuevos datos
    // Funcion de busqueda templatizada(funciona para getTurnosPorFecha, getTurnosPorHora, getTurnosPorKinesiologo)
	
	// Método de búsqueda genérica usando Templates (Plantillas)
	// Permite buscar turnos pasando cualquier tipo de dato (T), ya sea una Fecha, una hora (string) o un DNI.
	template <typename T>
	vector<Turno> getTurnosPor(const T &valorBuscado)
	{
		vector<Turno> encontrados;
		
		for (size_t i = 0; i < turnos.size(); i++)
		{
			if (coincide(turnos[i], valorBuscado)) 
			{
				encontrados.push_back(turnos[i]);
			}
		}
		
		return encontrados;
	}

    // Metodos de verificacion
    bool verificarDisponibilidadKinesiologo(const int &dniKine, const Fecha &fecha, const string &hora);
    bool verificarDisponibilidadCamilla(const Fecha &fecha, const string &hora);
    bool verificarDisponibilidadGimnasio(const Fecha &fecha, const string &hora);

    /// METODOS DE BUSQUEDA Y FILTRADO
   vector<Paciente*> filtrarPorNombreApellidoPaciente(const string &nombre, const string &apellido);
   vector<Kinesiologo*> filtrarPorNombreApellidoKinesiologo(const string &nombre, const string &apellido);

    Kinesiologo *buscarKinesiologoPorDni(const int &dniBuscado);
    Paciente *buscarPacientePorDni(const string &dniBuscado);

    /// Metodos de busqueda por id (indice en el vector correspondiente)
    Kinesiologo *buscarKinesiologoPorInd(size_t ind);
    Paciente *buscarPacientePorInd(size_t ind);

    /// Metodos de eliminacion
    void eliminarPacientePorDni(const string &dniKine);
    void eliminarKinesiologoPorDni(const string &nombreKinesio);
    void eliminarTurno(const string &dniPaciente, const Fecha &fecha, const string &hora);

    /// Metodo de alerta al kinesiologo de que le tienen que pagar
    vector<Paciente *> getPacientesConPagoPendiente() const;

    /// Metodos con archivos binarios

    // Guardar datos en archivos binarios
    void guardarPacientes(const string &nombreArchivo);
    void guardarKinesiologos(const string &nombreArchivo);
    void guardarTurnos(const string &nombreArchivo);

    // Cargar datos desde archivos binarios
    void cargarPacientes(const string &nombreArchivo);
    void cargarKinesiologos(const string &nombreArchivo);
    void cargarTurnos(const string &nombreArchivo);

    // Guardar/cargar todo de una vez
    void guardarTodosDatos();
    void cargarTodosDatos();
};

#endif
