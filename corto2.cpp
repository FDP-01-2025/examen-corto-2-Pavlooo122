#include <iostream>
using namespace std;
int main (){
int edad;
cout<<"Ingrese su edad para comprar"<<endl;
cin>>edad;

 if (edad < 12){
    cout<<"Tienes menos de 12, no puedes comprar"<<endl;
} else if (edad >= 12) {
    cout<<"Tienes 12 o mas de 12, puedes comprar";
} 


return 0 ;
}