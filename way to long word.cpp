//https://codeforces.com/contest/1766/problem/A
//unsolved

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>10)
        {
            string s1=s.substr(1,s.size()-2);
            cout<<s[0]<<s1.size()<<s[s.size()-1]<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
   
}