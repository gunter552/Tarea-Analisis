#pragma once
#include <iostream>
#include <string>

using std::string;

class Vertice;

class Arista
{
  float distancia;
  string tipoRuta;

  Arista* sig;
  Vertice* dest;

  friend class Grafo;

public:
Arista(Vertice* _dest, float _dist, string _tipoRuta)
{
  dest = _dest;
  distancia = _dist;
  tipoRuta = _tipoRuta;
  sig = NULL;
}
};