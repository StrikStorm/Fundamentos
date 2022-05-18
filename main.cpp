#include <iostream>
#include <fstream>

#include "Reserva.h"//la clase creada para guardar las reservas


using namespace std;

void mostrarCitas(int a, Reserva (&Citas)[60]){
    std::cout<<"=========================================="<<endl;
            for(int i=0;i<=a-1;i++){
                std::cout<<"Reservacion de: "<<Citas[i].get_nombre()<<endl;
                std::cout<<"Numero de personas: "<<Citas[i].get_cantPer()<<endl;
                std::cout<<"El dia: "<<Citas[i].get_dia()<<endl;
                std::cout<<"Paquete: "<<Citas[i].get_paquete()<<endl;
                std::cout<<"=========================================="<<endl;

            }
}

void despliegaMenu()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";   

    // Vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
    system("cls");
    // Hacemos primera linea del marco
    std::cout << "          "<<char(201);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(187)<<endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
        std::cout << "          " << char(186) <<  linea_blanco_100 << char(186) << endl;
    }
    // Ponemos el letrero principal
    std::cout << "          " << char(186) << "                                         MENU PRINCIPAL                                             "<< char(186) << endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
            std::cout << "          " << char(186)<< linea_blanco_100 << char(186) << endl;
    }
    // Ponemos las opciones
    std::cout << "          " << char(186) << "      01 Acceder como administrador" << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      02 Agendar nueva cita        " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      03 Ver citas agendadas       " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      04 Salir del programa        " << linea_blanco_65 << char(186) << endl;
    // Y ahora hacemos 5 lineas hacia abajo
    for (int i=1; i<=5;i++)
    {
        
        std::cout<< "          " <<char(186)<<linea_blanco_100<<char(186)<<endl;
    }
    //Ponemos la linea de abajo
    std::cout << "          "<<char(200);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(188)<<endl;
    std::cout << "                                  Opcion ";

}

void despliegaMenuCambios()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";   

    // Vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
    system("cls");
    // Hacemos primera linea del marco
    std::cout << "          "<<char(201);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(187)<<endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
        std::cout << "          " << char(186) <<  linea_blanco_100 << char(186) << endl;
    }
    // Ponemos el letrero principal
    std::cout << "          " << char(186) << "                                         MENU PRINCIPAL                                             "<< char(186) << endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
            std::cout << "          " << char(186)<< linea_blanco_100 << char(186) << endl;
    }
    // Ponemos las opciones
    std::cout << "          " << char(186) << "      01 Cambiar paquete           " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      02 Cambiar Numero de personas" << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      03 Cambiar Dia               " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      04 Regresar al menu anterior " << linea_blanco_65 << char(186) << endl;
    // Y ahora hacemos 5 lineas hacia abajo
    for (int i=1; i<=5;i++)
    {
        
        std::cout<< "          " <<char(186)<<linea_blanco_100<<char(186)<<endl;
    }
    //Ponemos la linea de abajo
    std::cout << "          "<<char(200);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(188)<<endl;
    std::cout << "                                  Opcion ";

}

void despliegaMenuAdmin()
{
    // Declaramos constantes para manejo de valores auxiliares
    const string linea_blanco_100 = "                                                                                                    ";
    const string linea_blanco_65 = "                                                                 ";   

    // Vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
    system("cls");
    // Hacemos primera linea del marco
    std::cout << "          "<<char(201);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(187)<<endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
            std::cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
     }
    // Ponemos el letrero principal
    std::cout << "          " << char(186) << "                                      MENU ADMINISTRADOR                                            "<< char(186) << endl;
    // Y ahora hacemos 3 lineas hacia abajo
    for (int i=1; i<=3;i++)
    {
            std::cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
    }
    // Ponemos las opciones
    std::cout << "          " << char(186) << "      01 Desplegar Citas           " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      02 Editar Citas existentes   " << linea_blanco_65 << char(186) << endl;
    std::cout << "          " << char(186) << "      03 Regresar al menu anterior " << linea_blanco_65 << char(186) << endl;
    // Y ahora hacemos 5 lineas hacia abajo
    for (int i=1; i<=5;i++)
    {
        std::cout << "          " << char(186) << linea_blanco_100 << char(186) << endl;
    }
    //Ponemos la linea de abajo
    std::cout << "          "<<char(200);
    for (int i=1; i<=100;i++) 
    {
        std::cout << char(205); 
    }
    std::cout << char(188)<<endl;
    std::cout << "                                  Opcion ";

}


int main(){
    Reserva Citas[60];
    int citas_loc=0, select, input_int,id,dia;
    string input_string;
    bool in_loop=true;
    char input_char;
    ifstream archIn;
    ofstream archExit;
    archIn.open("Citas.txt");

    while (archIn>>input_char>>input_int>>dia>>input_string)
    {
        Citas[citas_loc].set_paquete(input_char);
        Citas[citas_loc].set_cantPer(input_int);
        Citas[citas_loc].set_dia(dia);
        Citas[citas_loc].set_nombre(input_string);
        Citas[citas_loc].set_costo();
        citas_loc++;
    }
    
    
    archIn.close();

    do{//Aqui susede el primer menu
        despliegaMenu();
        std::cin>>select;
        switch (select)
        {
        case 1:
            std::cout<<"ingrese el usuario: "<<endl;
            std::cin>>input_string;
            if(input_string=="ADMIN"){
                std::cout<<"ingrese la contrasenia: "<<endl;
                std::cin>>input_string;
                if(input_string=="ADMIN"){
                    //! aqui susede todo lo de admin
                    
                    do{
                        despliegaMenuAdmin();
                        std::cin>>select;
                        switch (select)
                        {
                        case 1:
                            mostrarCitas(citas_loc, Citas);
                            system("pause");
                            break;
                        case 2:
                            do
                            {
                                std::cout<<"cual cita desea alterar?"<<endl;
                                std::cin>>id;
                                if(id>citas_loc||0<id){
                                    std::cout<<"id invalida"<<endl;
                                }
                            } while (id>citas_loc||0<id);
                            

                            do{
                                despliegaMenuCambios();
                                std::cin>>select;
                                switch (select)
                                {
                                case 1:
                                    std::cout<<"A cual paquete lo cambia? A, B o C "<<endl;
                                    std::cin>>input_char;
                                    Citas[id].set_paquete(input_char);
                                    Citas[id].set_costo();
                                    break;
                                case 2:
                                    std::cout<<"Cuantas personas van a ser?"<<endl;
                                    std::cin>>input_int;
                                    Citas[id].set_cantPer(input_int);
                                    break;
                                case 3:
                                    do
                                    {
                                     std::cout<<"A cual dia lo va a cambiar?"<<endl;
                                     std::cin>>input_int;
                                     if(input_int>30||0>input_int){
                                        std::cout<<"dia invalido"<<endl;
                                    }
                                    } while (input_int>30||0>input_int);
                                    Citas[id].set_dia(input_int);
                                    break;
                                case 4:
                                    in_loop=false;
                                    break;
                                
                                default:
                                    std::cout<<"incerte una opcion valida"<<endl;
                                    system("pause");
                                    break;
                                }
                            }while(in_loop);
                            in_loop=true;
                            break;
                        case 3:
                            in_loop=false;
                            break;
        
                        default:
                            std::cout<<"incerte una opcion valida"<<endl;
                            system("pause");
                            break;
                        }
                    }while(in_loop);
                }else std::cout<<"INCORRECTO"<<endl;
            }else std::cout<<"INCORRECTO"<<endl;
            in_loop=true;
            break;
        case 2:
            std::cout<<"A nombre de quien es la reservacion?"<<endl;
            std::cin>>input_string;
            Citas[citas_loc].set_nombre(input_string);
            std::cout<<"Cantidad de personas?"<<endl;
            std::cin>>input_int;
            Citas[citas_loc].set_cantPer(input_int);
            
            do
            {
             std::cout<<"Que dia del mes?"<<endl;
             std::cin>>input_int;
             if(input_int>citas_loc||0<id){
                std::cout<<"dia invalido"<<endl;
            }
            } while (input_int>30||0>input_int);
            Citas[citas_loc].set_dia(input_int);

            std::cout<<"Que paquete? A. 2 horas(200) B. 3 horas(350) C. Todo el dia(500)"<<endl;
            std::cin>>input_char;
            Citas[citas_loc].set_paquete(input_char);

            Citas[citas_loc].set_costo();

            citas_loc++;

            break;
        case 3:
            mostrarCitas(citas_loc, Citas);
            system("pause");
            
            break;
        case 4:
            std::cout<<"CERRANDO PROGRAMA....."<<endl;
            in_loop=false;

            break;
        
        default:
            std::cout<<"incerte una opcion valida"<<endl;
            system("pause");
            break;
        }
    }while(in_loop);

    archExit.open("Citas.txt");

    for (int i = 0; i < citas_loc; i++)
    {
        archExit<<Citas[i].get_paquete()<<" ";
        archExit<<Citas[i].get_cantPer()<<" ";
        archExit<<Citas[i].get_dia()<<" ";
        archExit<<Citas[i].get_nombre()<<endl;
    }
    archExit.close();
    

}