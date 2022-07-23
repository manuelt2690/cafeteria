// Restaurante02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <List>
#include <string>
#include <vector>
using namespace std;

int main()
{
    const string restauranteName = "XYZ";
    bool botonPresionado = false;
    string oprimirBoton = "";
    vector<int> numeroMesa;
    int contador = 0;

    int opcionPlato =0;
    


    const string platoDeldia = "Plato del dia";
    const int platoDeldiaContador = 3;
    const string recomendacionChef = "Recomendacion del chef";
    const int recomendacionChefContador = 5;
    const string pizzaNapolitana = "Pizza Napolitana";
    const int pizzaNapolitanaContador = 2;

    do {
        cout << "Cafeteria " + restauranteName << endl;
        cout << "escriba boton para entrar a la cafeteria , q para salir de la aplicacion" << endl;
        cin >> oprimirBoton;

        if (oprimirBoton == "boton") {
            botonPresionado = true;
        }
        else {
            botonPresionado = false;
        }

        if (botonPresionado == true) {

            cout << "------------------------------------------" << endl;
            cout << "Nuevo cliente ingresando a la cafeteria..." << endl;
            numeroMesa.push_back(contador + 1);
            cout << "Numero de mesa asignada: ";
            cout << numeroMesa.at(contador) << endl;
            cout << "Menu: " << endl;
            cout << "1. " + platoDeldia << endl;
            cout << "2. " + recomendacionChef << endl;
            cout << "3. " + pizzaNapolitana << endl;
            cout << "Ingrese que plato desea ordernar (1,2,3)" << endl;
            cin >> opcionPlato;

            switch (opcionPlato)
            {
            case 1:
                cout << platoDeldia + " ordenado" << endl;
                cout << "Esperando " << platoDeldiaContador << " minutos" << endl;
                cout << "Pedido entregado : " << platoDeldia + " a la mesa numero ";
                cout << numeroMesa.at(contador)<<endl;
                cout << "Esperando al siguiente cliente" << endl;
                cout << "------------------------------" << endl;
                contador = contador + 1;
                break;
            case 2:
                cout << recomendacionChef + " ordenado" << endl;
                cout << "Esperando " << recomendacionChefContador << " minutos" << endl;
                cout << "Pedido entregado : " << recomendacionChef + " a la mesa numero ";
                cout << numeroMesa.at(contador)<<endl;
                cout << "Esperando al siguiente cliente" << endl;
                cout << "------------------------------" << endl;
                contador = contador + 1;
                break;
            case 3:
                cout << pizzaNapolitana + " ordenado" << endl;
                cout << "Esperando " << pizzaNapolitanaContador << " minutos" << endl;
                cout << "Pedido entregado : " << pizzaNapolitana + " a la mesa numero ";
                cout << numeroMesa.at(contador)<<endl;
                cout << "Esperando al siguiente cliente" << endl;
                cout << "------------------------------" << endl;
                contador = contador + 1;
                break;
            default:
                cout << ("Plato invalido, verifique menu");
                cout << "Esperando al siguiente cliente" << endl;
                cout << "------------------------------" << endl;
                break;
            }



        }

        
        


    } while (!(oprimirBoton == "q"));


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
