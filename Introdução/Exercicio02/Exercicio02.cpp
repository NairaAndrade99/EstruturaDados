//Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área
#include <iostream>

using namespace std;

int main (){

    cout << "Retangulo ";

    float h,b,a;
    cout << "Informe a altura e a base: \n";
    cin >>h>>b;

    a = b * h;

    cout << "A area do retangulo é: "<< a ;

}