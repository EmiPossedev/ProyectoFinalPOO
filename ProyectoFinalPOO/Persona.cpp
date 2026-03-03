/// Includes necesarios para la implementación de la clase Persona
#include "Persona.h"
#include <string>

/// Implementación de los métodos de la clase Persona

// Metodos para el nombre
void Persona::setNombre(const string &nuevoNombre)
{
    nombre = nuevoNombre;
}
string Persona::getNombre() const
{
    return nombre;
}

// Mwtodos para el apellido
void Persona::setApellido(const string &nuevoApellido)
{
    apellido = nuevoApellido;
}
string Persona::getApellido() const
{
    return apellido;
}

// Mwtodos para el teléfono
void Persona::setTelefono(const std::string &nuevoTelefono)
{
    telefono = nuevoTelefono;
}
string Persona::getTelefono() const
{
    return telefono;
}

string Persona::getDni() const
{
    return dni;
}

void Persona::setDni(const string &dniNuevo)
{
    dni = dniNuevo;
}
