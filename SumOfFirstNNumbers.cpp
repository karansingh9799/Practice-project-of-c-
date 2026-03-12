#include<iostream>
using namespace std ;

int main () {
    int n ,i;
  
   int sum = 0 ;
    cout<<"enter your value " ;
    cin>>n;

    for (i=1 ; i <=n ; i++ ) {
        sum = sum + i;
        cout << endl ;
        cout <<  "Sum of one to " << i << " is " << sum ;
   
    }

}