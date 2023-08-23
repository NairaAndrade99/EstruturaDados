//Crie um programa que solicite ao usuário os três coeficientes de uma equação do
// segundo grau e informe os valores de x’ e x’’. 


#include <iostream>
#include <cmath> 
#include <stdio.h>
using namespace std;

int main (){

//solicite ao usuário os três coeficientes
double a,b,c,x1,x2, delta;

cout <<"Calcular uma equação do segundo grau \n";
cout << "Informe os tres coeficiente: \n";
cin >> a >> b >> c ;



delta = pow (b,2) - 4 * (a) * (c);

x1 = ((- (b)+ sqrt(delta) ) / (2*a) );
x2 = ((- (b) - sqrt(delta)) / (2*a)) ;

if (x2 < x1){
    cout << "S = {" << x2 <<  " , " << x1 <<  "  }";

}else{
  cout << "S = {" << x1<< " , " << x2 << "  }";  
}



}
