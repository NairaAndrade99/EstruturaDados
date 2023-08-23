//Escreva um programa que solicite ao usuário um valor inteiro e 
//informe se esse número é par ou ímpar.
#include <iostream>
using namespace std;

int main (){
   
   int num;
   cout << "Informe um valor para saber se é par ou impar ! \n ";
   cin >> num;

   if (num % 2 == 0){
      cout << "PAR";
   }else {
       cout << "IMPAR";
   }
}