/*Crie um programa que solicite ao usuário os três ângulos de um triângulo e
 informe se este é um triângulo equilátero, isósceles ou escaleno. */

#include <iostream>

using namespace std;

    int main (){
    
    float l1,l2,l3,tri;

    cout<< "Informe os treas angulos de um triangulo: \n";
    cin >> l1 >> l2 >> l3;
    
    if (l1 == l2 && l2 == l3){
        cout << "Trangulo equilátero";
    }else if (l1 == l2 || l2 == l3){
        cout << "Triangulo  isósceles";

    }else {
        cout << "Triangulo escaleno";
    }


    }