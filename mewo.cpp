#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s,s1="meow";
        cin>>s;
        for(int i=0;i<x;i++)
        {
            s[i]=tolower(s[i]);
        }
        string a="";
        for(int i=0;i<x;i++)
        {
            if(s[i]!=s[i-1])
            a=a+s[i];
        }
        if(a==s1) cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
