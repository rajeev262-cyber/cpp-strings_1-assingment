#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std ;
int main ()
{
    int n ;
    cout << "enter the string array size ";
    cin >> n ;

    vector<string> s ;
    for (int i =0 ; i<n ; i++)
    {
        string t ;
        cin >>t ;
        s.push_back(t);
    }
    cout<< s[0].substr();
    for (int i =0 ; i<n ; i++)
    {
        sort(s[i].begin(),s[i].end());
        for (int j=i+1; j<n ; j++)
        { 
            sort(s[j].begin(),s[j].end());
            for(int l=0 ; l<s[j].size();l++){
            for(int k=1;k<s[j].size();k++){
            if (s[i] == s[j].substr(l,k)) {
                cout << s[j].substr(l,k) << endl ;
            }
            }
            }

        }
    }



}