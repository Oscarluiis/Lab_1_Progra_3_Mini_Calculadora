#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    //variables
    double num_1=0, num_2=0, resul=0;
    char op;

    //Pedir ingreso
    cout<<"Ingrese primer numero :";
    cin>>num_1;

    cout<<"Ingrese operador :";
    cin>>op;

    cout<<"Ingrese segundo numero :";
    cin>>num_2;

    //Condiciones
    if (op == '+'){
        resul = num_1 + num_2;
        cout<<"La suma de los dos numero es :"<<resul;
    } else if(op == '-'){
        resul = num_1 - num_2;
        cout<<"La resta de los dos numeros es :"<<resul;
    }else if(op == '*'){
        resul = num_1 * num_2;
        cout<<"La multiplicacion de los dos numero es :"<<resul;
    }else if(op == '/'){
        resul = num_1 / num_2;
        cout<<"La division de los dos numero es :"<<resul;
    }else{
        cout<<"Intente con un operador valido";
    }

    return 0;

}

