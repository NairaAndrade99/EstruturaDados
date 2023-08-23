//Crie um programa que solicite ao usuário os lados de um trapézio 
//e informe a sua área.
#include <iostream>

using namespace std;

int main (){

    float b1,b2,h,a;

    cout << "Trapezio";

    cout << "Informe a base menor, base maior e a altura: \n";
    cin >> b1 >> b2 >> h ;

    a = ((b1 + b2) * h )/ 2;

    cout << "A area do trapezio é: " << a ;


}