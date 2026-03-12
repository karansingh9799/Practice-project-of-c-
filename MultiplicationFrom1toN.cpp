#include<iostream>
using namespace std ;

int main (){
    int i , n ;
    int m = 1 ;

    cout<< ("enter yout value: " );
    cin >> n ;
    
    for (i=1 ; i <= n ; i++ ) {
        m = m*i ;
    cout <<  " multification of "<< "1  "<< "to "  << i << " is " << m ;
    cout<<endl ;

    }
}