#include <iostream>
#include<Lista.h>
#include<Libro.h>
#include<Menu.h>
using namespace std;

int main()
{
    Menu menu;
    int opc= 0;
    Lista l;
    while (opc != -1) {
        opc = menu.menuPrincipal();
        switch(opc){
        case -1:{
            return 0;
        }
        case 1:{
            string nombre;
            string autor;
            string editorial;
            string ISBN;
            string categoria;
            string categoriaSecundaria;
            float precio;
            int ejemplares;
            cout<<"Nombre del libro: ";
            cin>>nombre;
            cout<<"Autor: ";
            cin>>autor;
            cout<<"Editorial: ";
            cin>>editorial;
            cout<<"ISBN: "<<endl;
            cin>>ISBN;
            cout<<"Categoria: ";
            cin>>categoria;
            cout<<"Categoria secuandaria: ";
            cin>>categoriaSecundaria;
            cout<<"Precio: ";
            cin>>precio;
            cout<<"Numero de ejemplares: ";
            cin>>ejemplares;
            if(precio<=0)
                break;
            Libro libro(nombre, autor, editorial, ISBN, categoria, categoriaSecundaria, ejemplares, precio);
            l.insertar(libro);
            l.mostrar(0);
            break;
          }

        case 2:{
            int opcBuscar = 0;
            while (opcBuscar != 3) {
            opcBuscar = menu.menuBuscar();
            switch (opcBuscar) {
                case 1:{
                string ISBN;
                cout<<"Ingrese el ISBN"<<endl;
                cin>>ISBN;
                int pos = l.getPos(ISBN);
                if(pos != -1){
                    cout<<l.mostrar(pos)<<endl;
                }else {
                    cout<<"No Existe"<<endl;
                }
                }
                break;
                case 2:{
                    string nombre;
                    cout<<"Digita el Nombre: ";
                    cin>>nombre;
                    if(l.buscar(nombre) == nullptr)
                         cout<<"No existe"<<endl;
                    else{
                        for(int i = 0;i<l.getCont();i++){
                            if (l.getLibro(i).getNombre().find(nombre) != std::string::npos) {
                                cout<<l.mostrar(i)<<endl;
                            }
                        }

                    }
                }

                break;
                case 3:
                     break;
                break;
                default:
                      cout<<"Opcion Invalida"<<endl;
                break;
                }
            }
            break;

        }

        case 3:{
            int opcModificar = 0;
            string ISBN;
            while (opcModificar != 9) {
                opcModificar = menu.menuModificar();
                if(opcModificar >= 0 && opcModificar <= 5){
                    cout<<"Ingrese El ISBN a modificar"<<endl;
                    cin>>ISBN;
                    string valor;
                    cout<<"Ingrese el valor"<<endl;
                    cin>>valor;
                    l.modificar(ISBN,opcModificar,valor);
                }else if (opcModificar == 6) {
                    cout<<"Ingrese El ISBN a modificar"<<endl;
                    cin>>ISBN;
                    int valor;
                    cout<<"Ingrese el valor"<<endl;
                    cin>>valor;
                    l.modificar(ISBN,opcModificar,valor);
                }else if (opcModificar == 7) {
                    cout<<"Ingrese El ISBN a modificar"<<endl;
                    cin>>ISBN;
                    float valor;
                    cout<<"Ingrese el valor"<<endl;
                    cin>>valor;
                    l.modificar(ISBN,opcModificar,valor);
                }else if (opcModificar == 8) {
                    cout<<"Ingrese El ISBN a modificar"<<endl;
                    cin>>ISBN;
                    int valor;
                    cout<<"Ingrese el valor"<<endl;
                    cin>>valor;
                    l.modificar(ISBN,opcModificar,valor);
                }
            }
            break;
        }
        case 4:{
            int opcVenta = 0;
            while (opcVenta != 3) {
                opcVenta = menu.menuVentas();
                string ISBN,nombre;
                if(opcVenta == 1){
                    cout<<"Ingrese El ISBN"<<endl;
                    cin>>ISBN;
                    if(l.vender(ISBN)){
                        cout<<"Venta Exitosa"<<endl;
                    }else {
                        cout<<"No Existe"<<endl;
                    }

                }else if (opcVenta == 2) {
                    cout<<"Ingrese El nombre"<<endl;
                    cin>>nombre;
                    if(l.buscar(nombre) == nullptr)
                         cout<<"No existe"<<endl;
                    else{
                        int libro;
                        for(int i = 0;i<l.getCont();i++){
                            if (l.getLibro(i).getNombre().find(nombre) != std::string::npos) {
                                cout<<l.mostrar(i)<<endl;
                                cout<<"Este es el libro que quieres comprar? 1/0"<<endl;
                                cin>>libro;
                                if(libro == 1){
                                    if(l.vender(l.getLibro(i).getISBN())){
                                        cout<<"Venta Exitosa"<<endl;
                                    }else {
                                        cout<<"No Existe"<<endl;
                                    }
                                    break;
                                }
                            }
                        }
                    cout<<"Eran todos los libros"<<endl;
                    }
                }
            }
            break;
        }
        case 5:{
            for(int i = 0;i<l.getCont();i++){
                cout<<l.mostrar(i)<<endl;
            }
            break;
        }

        case 6:{
            l.insertar(Libro("ElVinoDelEstio", "RayBradbury", "Omega", "ASDR85", "Fantasia", "Filosofia",27, 200));
            l.insertar(Libro("MobyDick", "HermanMellville", "De Bolsillo", "ASD985", "Novela", "Descubrimiento",27, 200));
            l.insertar(Libro("ElGranDiosPan", "Lovecraft", "Omega", "ASDF75", "Terror", "Psicologico",27, 200));
            l.insertar(Libro("Diccionario", "Einstein", "Alfa", "ASDR95", "Diccionario", "Diccionario",27, 200));
            l.insertar(Libro("Cosmos", "CarlSagan", "Omega", "ASDE68", "Espacio", "Astrologia",27, 200));
            l.insertar(Libro("MultimillonariosPorAccidente", "Wozniak", "DeBolsillo", "ASD895", "Terror", "Psicologico",1, 200));
            l.insertar(Libro("Cosmos", "CarlSagan", "Omega", "ASDE68", "Espacio", "Astrologia",27, 200));
            l.insertar(Libro("LosHombresNoBailan", "H.P.", "Milenio", "ASDR68", "Espacio", "Astrologia",27, 200));
            l.insertar(Libro("ATodoModo", "RaymondCarver", "Milenio", "AFGE68", "Espacio", "Astrologia",27, 200));
            l.insertar(Libro("Algorithms", "CarlSagan", "Omega", "UIDE68", "Espacio", "Astrologia",27, 200));

            break;
        }
        default:{
            cout<<"Opcion Invalida"<<endl;
            break;
        }
        }

    }
    return 0;
}
