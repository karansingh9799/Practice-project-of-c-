#include <iostream>
using namespace std ;

int main (){
    int number1,number2 ;

    cout<< "enter your first number please ! : ";
    cin>>number1 ;
    cout<< "enter your second number :" ;
    cin>> number2 ;
     
    if (number1 > number2){
        cout<< number1<<" is greater than " << number2 ;
    } else if (number2 > number1){
        cout << number2 <<" is greater than " << number1 ; 

    } else {
        cout << "both numbers are same " ;
    }

}