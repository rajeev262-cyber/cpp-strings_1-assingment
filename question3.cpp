#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    string s ;
    getline(cin,s);
    cout << s<< endl ;
    bool flag = true  ;
    int i =0 ;
    int j = s.size()-1;
    while (i<=j) {
        if (s[i]!=s[j] ){
            flag =  false ;
            break ;
            
        }
        i++;
        j--;
    }
    if (flag == true ) cout << "yes it is a pailendrome ";
    else cout << "no , it is not a palindrome ";
}