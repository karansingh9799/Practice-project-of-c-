#include<iostream>
using namespace std ;

int main (){
    int firstNumber ,secondNumber ,thirdNumber ;
    cout << "enter  your first number : " ;
    cin >> firstNumber ;
    cout<<"enter your second number : " ;
    cin >> secondNumber ;
    cout << "enter your third value : " ;
    cin >> thirdNumber ;
    
    if (firstNumber > secondNumber && firstNumber > thirdNumber){
        cout<< firstNumber << " is greatest number from all of your input value " ;
            
    } else if (secondNumber > firstNumber && secondNumber > thirdNumber ) {
        cout << secondNumber << " is greatest number from all of your input value : " ;
    }else if (thirdNumber > firstNumber && thirdNumber > secondNumber) {
        cout << thirdNumber << " is greatest number from all of your input value" ;
    } else if (firstNumber == secondNumber || secondNumber == thirdNumber || firstNumber == thirdNumber) {
         if (firstNumber == secondNumber && secondNumber == thirdNumber)
        {
           { cout<<"all of values  given are same " ; } 

           }
         else {cout << "given two values, which put by you are same so please enter diffrent  " ; }

    }
}
    
