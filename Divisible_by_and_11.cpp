#include<iostream>
using namespace std ;
 
int main (){
    int number;

    cout << "enter your first number : " ;
    cin >> number ;

    if (number % 5 == 0  && number % 11 == 0 ) {
        {cout << number << " can be devided by both of numbers ! " ; }
    } 
    else if(number % 5 == 0) {
        cout << number << " is devided by 5" ;
    }
    else if (number % 11 == 0 ){
    cout << number << " is devided by 11" ;
    } else { cout << "this given number " << number << " is not devided by five or eleven." ;
        }   
}