#include "Libro.h"

Libro::Libro()
{

}

Libro::Libro(string nombre, string autor, string editorial, string ISBN, string categoria, string categoriaSecundaria, int ejemplaresDisponibles, float precio)
{
    this->nombre = nombre;
    this->autor = autor;
    this->editorial = editorial;
    this->ISBN = ISBN;
    this->categoria = categoria;
    this->categoriaSecundaria = categoriaSecundaria;
    this->ejemplaresDisponibles = ejemplaresDisponibles;
    this->precio = precio;
    this->rank = 0;
}


string Libro::getNombre() const
{
    return nombre;
}

void Libro::setNombre(const string &value)
{
    nombre = value;
}

string Libro::getAutor() const
{
    return autor;
}

void Libro::setAutor(const string &value)
{
    autor = value;
}

string Libro::getEditorial() const
{
    return editorial;
}

void Libro::setEditorial(const string &value)
{
    editorial = value;
}

string Libro::getISBN() const
{
    return ISBN;
}

void Libro::setISBN(const string &value)
{
    ISBN = value;
}

string Libro::getCategoria() const
{
    return categoria;
}

void Libro::setCategoria(const string &value)
{
    categoria = value;
}

string Libro::getCategoriaSecundaria() const
{
    return categoriaSecundaria;
}

void Libro::setCategoriaSecundaria(const string &value)
{
    categoriaSecundaria = value;
}

int Libro::getEjemplaresDisponibles() const
{
    return ejemplaresDisponibles;
}

void Libro::setEjemplaresDisponibles(int value)
{
    ejemplaresDisponibles = value;
}

float Libro::getPrecio() const
{
    return precio;
}

void Libro::setPrecio(float value)
{
    precio = value;
}

int Libro::getRank() const
{
    return rank;
}

void Libro::setRank(int rank)
{
    this->rank = rank;
}


string Libro::toString(){
    stringstream ss;
    ss<<"nombre:"<<nombre<<"\n";
    ss<<"autor:"<<autor<<"\n";
    ss<<"editorial:"<<editorial<<"\n";
    ss<<"ISBN:"<<ISBN<<"\n";
    ss<<"categoria:"<<categoria<<"\n";
    ss<<"categoriaSecundaria:"<<categoriaSecundaria<<"\n";
    ss<<"ejemplaresDisponibles:"<<ejemplaresDisponibles<<"\n";
    ss<<"precio:"<<precio<<"\n";
    ss<<"rank:"<<rank<<"\n";
    return ss.str();
}

bool Libro::operator==(Libro libro)
{
    return libro.ISBN == this->getISBN();
}
