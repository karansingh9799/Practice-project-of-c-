#include<iostream>
using namespace std ;

int main () {
    int a,b;
    char operatar ;

    cout << "enter your first value : " ;
    cin >> a ;
    cout<< "enter your second value : " ;
    cin >> b ;
    cout<<"enter your operator like + or - or * or % ";
    cin >> operatar ;

    int sum;
    sum = a+b ;
    int subtract = a-b ;
    int multiply = a*b ;
    int devide = a/b ;
    

    if (operatar == '+' ){
        cout<<"sum of this numbers are : " << sum ;
    }else if ( operatar == '-'){
        cout<< "substraction of this numbers are :  " << subtract ;
    }else if (operatar == '*'){
        cout<< "multipication of this numbers are : "<< multiply ;
    }else if(operatar == '/') {
        cout<<"devidation of this numbers are : " << devide ;
    }else {"please use only operators from given four of types not else " ;}
}