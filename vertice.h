#pragma once
#include <iostream>
#include <string> 

using std::string;

class Arista;

class Vertice
{
  string nombre;
  string id;
  string tipo;
  string direccion;

  Vertice* sig;
  Arista* ari;

  friend class Grafo;


public:
Vertice(string _id,string _nombre, string _tipo, string _dir)
{
  id = _id;
  nombre = _nombre;
  tipo = _tipo;
  direccion = _dir;
  sig = NULL;
  ari = NULL;
}
};