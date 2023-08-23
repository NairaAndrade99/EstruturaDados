/*
Escreva um programa que solicite ao usuário quatro números 
e mostre na tela o maior, o menor e a média aritmética dos números digitados. 
*/
#include <iostream>

using namespace std;

int main (){

    int num1, num2,num3,num4;
    cout << "Informe quatro numeros: \n";

    cin >> num1 >> num2 >> num3 >> num4;

    int maior = num1;
    int menor = num1;

   if (num2 > maior){
      maior = num2;
   }if (num3 > maior){
      maior = num3;
   }if (num4 > maior){
      maior = num4;
   }

   cout << "O maior numero: " << maior;
   cout << "\n";

   if (num2 < menor){
      menor = num2;
   } if (num3 < menor){
      menor = num3;
   } if (num4 < menor){
      menor = num4;
   }
  
  cout << "O menor numero: "<< menor;
  cout << "\n";

   int soma =( num1 + num2 + num3 + num4 )/ 4;

cout << "A media aritmetica : "<< soma;

}