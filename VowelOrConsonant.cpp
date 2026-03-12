#include<iostream>
#include<cctype>
using namespace std ;
 
int main () {
    char characters ;
    
    cout<<"enter your character : " ;
    cin >> characters ;
    char character = tolower(characters) ;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        cout << "the character is vowl not consonant" ;
    } else {cout << "the character is consonant" ; }
}    