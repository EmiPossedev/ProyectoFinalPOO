#include "Kinesiologo.h"

string Kinesiologo::getEspecialidad() const
{
    return especialidad;
}

int Kinesiologo::getCantidadPacientesAtendidos() const
{
    return cantidadPacientesAtendidos;
}

/// Metodos para modificar los datos del kinesiólogo faltantes

void Kinesiologo::setEspecialidad(const string &nuevaEspecialidad)
{
	
	especialidad = nuevaEspecialidad; 
}

void Kinesiologo::borrarEspecialidad()
{
    especialidad = ""; 
}

void Kinesiologo::setCantPacientesAtendidos(const int &cant)
{
    cantidadPacientesAtendidos = cant;
}

int Kinesiologo::getMatricula() const
{
    return matricula;
}

void Kinesiologo::setMatricula(int n)
{
    matricula = n;
}
