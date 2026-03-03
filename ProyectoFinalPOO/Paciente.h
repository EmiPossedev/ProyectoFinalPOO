#ifndef PACIENTE_H
#define PACIENTE_H
#include "Fecha.h"
#include "Persona.h"
#include <string>
using namespace std;

// Registro para guardar en archivo binario (incluye datos de Persona + Paciente)
struct RegistroPaciente
{
    // Datos heredados de Persona
    char nombre[60];
    char apellido[60];
    char telefono[20]; // del paciente
    char dni[16];
    // Datos propios de Paciente
    Fecha fechaDeInicio;
    char diagnostico[100];
    char obraSocial[50];
    int cantSesionesTotales;
    int cantSesionesRealizadas;
    char observaciones[200];
    bool sesionesPagas;
};

class Paciente : public Persona
{
private:
    Fecha fechaDeInicio;
    string diagnostico;
    string obraSocial;          // mencionar si tiene o viene en forma particular
    int cantSesionesTotales;    // la cantidad de sesiones totales asignadas para el tratamiento
    int cantSesionesRealizadas; // las que se vayan realizando, se van a ir descontando de las totales
    string observaciones;
    bool sesionesPagas;

public:
	// MÈtodos constructores
	Paciente() : Persona() {}
	Paciente(string nom, string ape, string tel, string dniNuevo, Fecha fechaInicio, string diag, string obraSoc, int cantTotal, int cantRealizadas, string obs, bool sesPagas)
	: Persona(nom, ape, tel, dniNuevo), fechaDeInicio(fechaInicio), diagnostico(diag),
	  obraSocial(obraSoc), cantSesionesTotales(cantTotal),
	  cantSesionesRealizadas(cantRealizadas), observaciones(obs), sesionesPagas(sesPagas) {};
	
    // Metodos para obtener y modificar los datos del paciente
    // Obtener y modificar la fecha de inicio del paciente
    Fecha getFechaDeInicio() const;
    void setFechaDeInicio(const Fecha &nuevaFechaInicio);
    // Obtener y modificar el di√°gnostico del paciente
    string getDiagnostico() const;
    void setDiagnostico(const string &nuevoDiagnostico);
    // Obtener y modificar la obra social del paciente
    string getObraSocial() const;
    void setObraSocial(const string &nuevaObraSocial);
    // Obtener y modificar las sesiones totales que le corresponden al paciente
    int getCantSesionesTotales() const;
    void setCantSesionesTotales(const int &nuevaCant);
    // Solo un metodo para saber las sesiones realizadas y no para modificarlas porque
    // esa logica la manejan otros metodos, si alguien las modifica podra romper la logica del sistema
    int getCantidadSesionesRealizadas() const;
    void setCantidadSesionesRealizadas(const int &nuevaCant);
    // Obtener y modificar las observaciones del paciente
    string getObservaciones() const;
    void setObservaciones(const string &nuevaObservacion);
    void borrarObservaciones();
    // Metodos para las sesiones pagas y pendientes
    bool getSesionesPagas() const;
    void marcarComoPendiente();
    void marcarComoPagado();

    // Metodos para las cancelacion de turnos de los pacientes
    void descontarSesionDelTotal();   // descontar la sesion si se agenda un turno
    void reintegrarSesionRealizada(); // reintegrar la sesion si se cancela el turno
};

#endif
