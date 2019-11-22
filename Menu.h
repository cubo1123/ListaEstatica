#ifndef MENU_H
#define MENU_H
using namespace std;
#include<iostream>

class Menu
{
public:
    Menu();
    int menuPrincipal();
    int menuBuscar();
    int menuModificar();
    int menuVentas();
    int obtenerOpcion();
};

#endif // MENU_H
