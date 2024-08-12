/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include<cctype>
using namespace std;

int countVowels(const string& str){
    int vowelCount=0;
    for(char ch : str){
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowelCount++;
        }
    }
    return vowelCount;
}

int main()
{
    string input;
    cout<<"Enter a string: ";
    getline(cin, input);
    
    int result=countVowels(input);
    cout<<"number od vowels:"<<result<<endl;
    
    return 0;
}