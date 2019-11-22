#ifndef LIBRO_H
#define LIBRO_H
#include<iostream>
#include <sstream>
using namespace std;

class Libro
{
public:
    Libro();
    Libro(string nombre,string autor, string editorial,string ISBN,string categoria,string categoriaSecundaria,int ejemplaresDisponibles,float precio);


    string getNombre() const;
    void setNombre(const string &value);

    string getAutor() const;
    void setAutor(const string &value);

    string getEditorial() const;
    void setEditorial(const string &value);

    string getISBN() const;
    void setISBN(const string &value);

    string getCategoria() const;
    void setCategoria(const string &value);

    string getCategoriaSecundaria() const;
    void setCategoriaSecundaria(const string &value);

    int getEjemplaresDisponibles() const;
    void setEjemplaresDisponibles(int value);

    float getPrecio() const;
    void setPrecio(float value);

    int getRank() const;
    void setRank(int rank);
    string toString();
private:
    string nombre;
    string autor;
    string editorial;
    string ISBN;
    string categoria;
    string categoriaSecundaria;
    int ejemplaresDisponibles;
    float precio;
    int rank;
    bool operator==(Libro libro);
};

#endif // LIBRO_H
