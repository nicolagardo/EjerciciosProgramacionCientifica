// Ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#define MAYOR(a, b, c) ( a > b && a > c ? a : b > c ? b : c > a ? c : b)
#define MENOR(a, b, c) ( a < b && a < c ? a : b < c ? b : c < a ? c : b)
int main()
{   
    
    int n, nx, nxx, mayor, menor = 0;
    int i = 1;
    do
    {
        
        if (!i)break;
        {
            cout << "Inicio" << endl;
            cout << "Ingrese numero 1: ";
            cin >> n;
            cout << "Ingrese numero 2: ";
            cin >> nx;
            cout << "Ingrese numero 3: ";
            cin >> nxx;
            mayor = MAYOR(n, nx, nxx);
            menor = MENOR(n, nx, nxx);
            cout << "El mayor es: " << mayor << endl;
            cout << "El menor es: " << menor << endl;
            cout << "Desea salir? 0 = FIN,  != 0 CONTINUAR: ";
            cin >> i;
        }
        
    } while (true);
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln