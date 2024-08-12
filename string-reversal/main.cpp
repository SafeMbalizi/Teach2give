/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

string reverseString( const string& str){
    string reverseStr=str;
    int n=reverseStr.length(); 
    
    string result;
    for(int i=n-1;i>=0;i--){
       result+=reverseStr[i];
    }
    return result;
}
int main()
{
    string input;
    cout<<"Enter a string: ";
    getline(cin, input);
    
    string result=reverseString(input);
    cout<<"reversed string:"<<result<<endl;

    return 0;
}