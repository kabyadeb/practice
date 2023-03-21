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
        int x,c=0,c1=0;
        cin>>x;
        string s,a;
        for(int i=0;i<(2*x-2);i++)
        {
            cin>>a;
            s=s+a;
        }
        for(int i=0;i<(int)s.size();i++)
        {
            for(int j=i+1;j<(int)s.size();j++)
            {
                if(s[i]==s[j]) c++;
            }
            if(c%2!=0){
                c=0;
                c1++;
            }
        }
        if( c1>=2) cout<<"NO"<<endl;
        else if(c%2==0) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
   
}