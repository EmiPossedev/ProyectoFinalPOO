#ifndef FECHA_H
#define FECHA_H
#include <iostream>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
	
	// Funcion para poder transformar el struct a string
	string toString() const;
	
    // Sobrecarga del operador < (Para que el sort funcione solo)
    // Compara Anios, luego Meses, luego Dias.
    bool operator<(const Fecha &f) const
    {
        if (anio != f.anio)
            return anio < f.anio;
        if (mes != f.mes)
            return mes < f.mes;
        return dia < f.dia;
    }

    // Sobrecarga del operador == (Para buscar turnos por fecha)
    bool operator==(const Fecha &f) const
    {
        return dia == f.dia && mes == f.mes && anio == f.anio;
    }

    // Sobrecarga del operador != (Para saber si son distintas)
    bool operator!=(const Fecha &f) const
    {
        return !(*this == f);
    }
};

bool esFechaValida(int dia, int mes, int anio);
// Sobrecarga del operador <<
//  Esto permite hacer: cout << turno.fecha;
//  y salga impreso  "25/10/2023" automaticamente.
ostream &operator<<(std::ostream &os, const Fecha &f);

#endif
