#include "Menu.h"

Menu::Menu()
{

}

int Menu::menuPrincipal()
{
    cout<<"1.-Agregar Libro"<<endl;
    cout<<"2.-Buscar Libro"<<endl;
    cout<<"3.-Modificar Informacion"<<endl;
    cout<<"4.-Vender"<<endl;
    cout<<"5.-Mostrar Todo"<<endl;
    cout<<"6.-Seeder"<<endl;
    cout<<"\t -1.-Salir"<<endl;
    return obtenerOpcion();
}

int Menu::menuBuscar()
{
    cout<<"\t 1.-ISBN"<<endl;
    cout<<"\t 2.-Nombre"<<endl;
    cout<<"\t 3.-Salir"<<endl;
    return obtenerOpcion();
}

int Menu::menuModificar()
{
    cout<<"Ingrese la opcion a modificar"<<endl;
    cout<<"1.-Nombre"<<endl;
    cout<<"2.-Autor"<<endl;
    cout<<"3.-Editorial"<<endl;
    cout<<"4.-Categoria"<<endl;
    cout<<"5.-Categoria Secundaria"<<endl;
    cout<<"6.- Ejemplares Disponibles"<<endl;
    cout<<"7.-Precio"<<endl;
    cout<<"8.-Rank"<<endl;
    cout<<"\t 9.-Salir"<<endl;
    return obtenerOpcion();
}

int Menu::menuVentas()
{
    cout<<"\t 1.-ISBN"<<endl;
    cout<<"\t 2.-Nombre"<<endl;
    cout<<"\t 3.-Salir"<<endl;
    return obtenerOpcion();
}

int Menu::obtenerOpcion()
{
    int opc;
    cin>>opc;
    return opc;
}


