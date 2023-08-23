//Crie um programa que solicite ao usuário os lados de um triângulo e 
//informe a sua área
#include <iostream>

using namespace std;

int main (){

    cout<< "Triangulo";

    float b,h,a;

    cout << "Informe a altura e a base: \n";
    cin >> h >> b;

    a = (b*h )/ 2;

    cout << "A area do triangulo é: "<< a;

}