#include<iostream>
using namespace std ;

int main (){
    int i , n ; 
    int fact  = 1 ;
    cout<<"Enter the number which you want to know factorial ! enter : " ;
    cin >> n ;
     for ( i =1 ; i <= n ; i++ ){
        fact *= i ;
        cout<<fact;
     }



}