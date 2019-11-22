#include "Lista.h"

Lista::Lista()
{
    cont = 0;

}

int Lista::getCont(){
    return cont;
}

Libro Lista::getLibro(int i){
    return libros[i];
}

bool Lista::validatePos(int pos)
{
    if(pos < 0){
        return false;
    }
    if(pos > cont){
        return false;
    }
    return true;
}

Libro *Lista::insertar(Libro libro)
{
    if(cont == MAX){
        return nullptr;
    }
    if(existe(libro.getISBN())){
        return nullptr;
    }
    libros[cont++] = libro;
}

bool Lista::vender(string ISBN)
{
    int pos = getPos(ISBN);
    if(pos == -1){
        return false;
    }

    libros[pos].setEjemplaresDisponibles(libros[pos].getEjemplaresDisponibles() - 1);
    if(libros[pos].getEjemplaresDisponibles() == 0){
        eliminar(pos);
    }
    return true;
}

Libro *Lista::buscar(string nombre)
{
    for(int i = 0 ; i < cont ; i++){
        if(libros[i].getNombre().find(nombre) != string::npos){
            return &libros[i];
        }
    }
    return nullptr;
}


int Lista::getPos(string ISBN)
{
    for(int i = 0 ; i < cont ; i++){
        if(ISBN == libros[i].getISBN()){
            return i;
        }
    }
    return -1;
}

Libro *Lista::modificar(string ISBN, int dato, string value)
{
    int pos = getPos(ISBN);
    if(!validatePos(pos)){
        return nullptr;
    }
    if(dato == 1){
        libros[pos].setNombre(value);
    }
    if(dato == 2){
        libros[pos].setAutor(value);
    }
    if(dato == 3){
        libros[pos].setEditorial(value);
    }
    if(dato == 4){
        libros[pos].setCategoria(value);
    }
    if(dato == 5){
        libros[pos].setCategoriaSecundaria(value);
    }
    return &libros[pos];
}

Libro *Lista::modificar(string ISBN, int dato, int value){
    int pos = getPos(ISBN);
    if(!validatePos(pos)){
        return nullptr;
    }
    if(dato == 6){
        libros[pos].setEjemplaresDisponibles(value);
    }
    if(dato == 8){
        libros[pos].setRank(value);
    }
    return &libros[pos];
}

Libro *Lista::modificar(string ISBN, int dato, float value){
    int pos = getPos(ISBN);
    if(!validatePos(pos)){
        return nullptr;
    }
    if(dato == 7){
        libros[pos].setPrecio(value);
    }
    return &libros[pos];
}
string Lista::mostrar(int pos)
{
    return libros[pos].toString();
}

bool Lista::eliminar(int pos){

    if(validatePos(pos)){
        for(int i = pos; i<cont;i++){
            libros[i] = libros[i+1];
        }
        cont--;
        return true;
    }
    return false;
}


bool Lista::existe(string ISBN)
{
    for(int i = 0 ; i < cont ; i++){
        if(ISBN == libros[i].getISBN()){
            return true;
        }
    }
    return false;
}
