#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    string  s ;
    cout << "enter the digit less than 10 number ";
    cin >> s ;
    cout << s << endl ;
    int n = s.size();
    int pro = 1 ;
    int sum = 0 ;
    for (int i=n-1 ; i>=0; i--)
    {
        sum += (s[i]-'0')*pro;
        pro *= 10;
    }
    int x = sum ;
    cout << "the number is  " << x ;
}