#include<iostream>
#include<string>
using namespace std ;
int main  ()
{
    
    // shotmethod 
//     string s ;
//     getline(cin,s);
//     cout << s<< endl ;
//     for (int i=0 ; i< s.size();i++)
//     {
//         if (i%2!= 0) s[i] = '#';

//     }
//     cout << s ;
// another method 
int n ;
    cout << "enter the size of string ";
    cin >> n ;
    char str[n] ;
    for (int i=0 ; i<n ;i++)
    {
        cin >> str[i]; 
    }
    cout << str << endl ;
    for (int i=0 ; i< n ; i++)
    {
        if (i%2!=0) str[i] = '#' ;
    }
    cout<< str ;
 }