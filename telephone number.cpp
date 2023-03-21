#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(s.size()==11 && s[0]=='8') cout<<"YES"<<endl;
        else if(x>11)
        {
            for(int i=0;i<(x-11);i++)
            {
                if(s[i]=='8') {
                cout<<"YES"<<endl;
                break;
                }
            }
        }
        else  cout<<"NO"<<endl;
    }
}
