#include <iostream>
using namespace std;
int main (){
int edad, opcion, opcion2, opcion3, opcion4;
float descuentoH = 8 - (8*0.25) , descuentoP =7 - (7*0.25), saldo = 7.00;
float descuentoA = 10 - (10*0.25), descuentoS = 6 - (6*0.30), descuentoPC = 9 - (9*0.30), descuentoCP =  5 - (5*0.30);
cout<<"Ingrese su edad para comprar"<<endl;
cin>>edad;

 if (edad < 12){
    cout<<"Tienes menos de 12, no puedes comprar"<<endl;
} else if (edad >= 12) {
    cout<<"Tienes 12 o mas de 12, puedes comprar"<<endl;
    cout<<"Selecciona que tipo de cliente eres"<<endl;
    cout<<"1. Estudiante"<<endl;
    cout<<"2. Adulto mayor"<<endl;
    cout<<"3. Ver todo"<<endl;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        
        cout<<"    --Para Estudiante (descuento del 25%): --"<<endl;
        cout<<"1. Combo Hamburguesa: $8"<<endl;
        cout<<"2. Combo Pizza Personal: $7"<<endl;
        cout<<"3. Almuerzo Ejecutivo: $10"<<endl;
        cin>>opcion2;
        switch (opcion2)
        {
        case 1:
            cout<<"El precio de hamburguesa es: "<< descuentoH <<endl;
            if (descuentoH > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoH - 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoH << endl;
            }
            break;
        case 2: 
            cout<<"El precio de pizza es: "<<  7 - (7*0.25) <<endl;
                if (descuentoP > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoP- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoP << endl;
            }
            break;
        case 3 : 
            cout<<"El precio de almuerzo es: "<< descuentoA<<endl;
             if (descuentoA > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoA- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoA<< endl;
            }
            break;
        default:
            cout<<"Error al seleccionar una opcion";    
        }
        break;
    case 2:
    cout<<"     --Para Adulto Mayor (descuento del 30%): --"<<endl;
    cout<<"1. Sopa Nutritiva: $6"<<endl;
    cout<<"2. Plato Casero: $9"<<endl;
    cout<<"3. Postre + Cafe: $5"<<endl;
    cin>>opcion3;
    switch (opcion3)
    {
    case 1:
         cout<<"El precio de sopa es: "<< descuentoS <<endl;
         if (descuentoS > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoS- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoS<< endl;
            }
        break;
    case 2: 
        cout<<"El precio de plato casero es: "<< descuentoPC <<endl;
        if (descuentoPC > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoPC- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoPC<< endl;
            }
        break;

     case 3 : 
         cout<<"El precio postre y cafe es: "<< descuentoCP<<endl;
         if (descuentoCP > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoCP- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoCP<< endl;
            }
        break;
        
    default: 
    cout<<"Error al seleccionar una opcion";    
        break;
    }
case 3:
cout<<" Ver todo"<<endl;
cout<<"1. Estudiante "<<endl;
cout<<"2. Adulto "<<endl;
cin>>opcion4;
 switch (opcion4)
 {
 case 1:
    cout<<"    --Para Estudiante (descuento del 25%): --"<<endl;
        cout<<"1. Combo Hamburguesa: $8"<<endl;
        cout<<"2. Combo Pizza Personal: $7"<<endl;
        cout<<"3. Almuerzo Ejecutivo: $10"<<endl;
        cin>>opcion2;
        switch (opcion2)
        {
        case 1:
            cout<<"El precio de hamburguesa es: "<< descuentoH <<endl;
            if (descuentoH > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoH - 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoH << endl;
            }
            break;
        case 2: 
            cout<<"El precio de pizza es: "<<  7 - (7*0.25) <<endl;
                if (descuentoP > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoP- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoP << endl;
            }
            break;
        case 3 : 
            cout<<"El precio de almuerzo es: "<< descuentoA<<endl;
             if (descuentoA > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoA- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoA<< endl;
            }
            break;
        default:
            cout<<"Error al seleccionar una opcion";    
        }
        break;
    break;
 
 default:
 cout<<"Error al seleccionar una opcion";   
    break;

case 2: 
cout<<"     --Para Adulto Mayor (descuento del 30%): --"<<endl;
    cout<<"1. Sopa Nutritiva: $6"<<endl;
    cout<<"2. Plato Casero: $9"<<endl;
    cout<<"3. Postre + Cafe: $5"<<endl;
    cin>>opcion3;
    switch (opcion3)
    {
    case 1:
         cout<<"El precio de sopa es: "<< descuentoS <<endl;
         if (descuentoS > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoS- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoS<< endl;
            }
        break;
    case 2: 
        cout<<"El precio de plato casero es: "<< descuentoPC <<endl;
        if (descuentoPC > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoPC- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoPC<< endl;
            }
        break;

     case 3 : 
         cout<<"El precio postre y cafe es: "<< descuentoCP<<endl;
         if (descuentoCP > 7){
                cout<<"No le alcanza el dinero, le falta "<< descuentoCP- 7 <<endl;
        
            } else {
                cout<<"compre con exito, su nuevo saldo es: "<< 7 -  descuentoCP<< endl;
            }
        break;
        
    default: 
    cout<<"Error al seleccionar una opcion";    
        break;
    }
 }


    default:
    cout<<"Error al seleccionar una opcion";    
        break;
    }
} 


return 0 ;
}
