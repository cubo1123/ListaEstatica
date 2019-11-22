#ifndef LISTA_H
#define LISTA_H
#include<Libro.h>
#define MAX 100
/*
El sistema debe tener la capacidad para: insertar nuevos títulos al catálogo de libros, vender libros,
buscar libros y mostrar todas sus características, modificar información de un libro específico y
mostrar todo el catálogo de libros.
*/
class Lista
{
public:
    Lista();
    Libro* insertar(Libro libro);
    bool vender(string ISBN);
    Libro *buscar(string nombre);
    int getPos(string ISBN);
    Libro* modificar(string ISBN, int dato, string value);
    Libro* modificar(string ISBN, int dato, float value);
    Libro* modificar(string ISBN, int dato, int value);
    string mostrar(int pos);
    bool eliminar(int pos);
    bool existe(string ISBN);
    int getCont();
    Libro getLibro(int pos);

private:
    int cont;
    Libro libros[100];
    bool validatePos(int pos);

};

#endif // LISTA_H
