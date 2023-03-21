#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        
        string s;
        cin>>s;
        cout<<"Case "<<i<<": ";
        if(s[4]!='s'){
            string s1=s.substr(0,4);
            string s2=s.substr(4,s.size());
            cout<<s1<<"s"<<s2<<endl;;
        }
        else cout<<s<<endl;
    }
}
