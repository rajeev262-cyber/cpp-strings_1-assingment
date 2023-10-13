#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter any number ";
    cin >> n ;
    string s  = to_string(n);
    cout << "number of digits = "<< s.size() ;
    
}