/*
Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. 
Um ano é considerado bissexto se ele for divisível por quatro, mas não por 100. 
Ou então se ele for divisível por 400
*/
#include <iostream>

using namespace std;

int main (){

int ano;
cout << "Saber se é uma no bissexto";
cout << "Informe o ano \n";
cin >> ano;

if (ano % 4 == 0 || ano % 400 == 0){

    cout << "Ano bissexto";

}else {
    cout << "Não bissexto";
}




}
