//Escreva m programa que solicite ao usuário a idade de uma pessoa e
// informe se essa pessoa é criança (0 a 11 anos), adolescente 
//(12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).
#include <iostream>
using namespace std;

int main (){
  
  int idade;
  cout << "Informe a sua idade: \n ";
  cin >> idade;

  if (idade >= 0 && idade <= 11 ){
    cout << "Criança";

  }else if (idade >= 12 && idade <= 17 ){
    cout << "Adolescente";

  }else if (idade >= 18 && idade <= 49){
     cout << "Adulta";
  }else {
    cout << "Idoso";
  }
    

}