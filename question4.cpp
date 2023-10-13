#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    string s ;
    getline(cin,s);
    cout << s << endl ;
    int n = s.size();
    int i = n/2;
    int j = n-1 ;
    while (i<=j){
        int temp = s[i] ;
        s[i] = s[j];
        s[j] = temp ;
        i++;
        j--;
    }
    cout<< s ;
}