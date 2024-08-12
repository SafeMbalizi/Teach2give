/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

vector<int> filterEvenNumbers(const vector<int>& numbers){
    vector<int> evenNumbers;
    
    for(int num :numbers){
        if(num%2==0){
            evenNumbers.push_back(num);
        }
    }
    return evenNumbers;
}
int main()
{
    vector<int> input={1,2,3,4,5};
    vector<int> result=filterEvenNumbers(input);
    
    cout<<"Even numbers: ";
    for(int num: result){
        cout<<num<<"";
    }
    
    cout<<endl;

    return 0;
}