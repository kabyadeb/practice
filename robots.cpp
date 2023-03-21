#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,f=0;
        cin>>x>>y;
        string s[x];
        for(int i=0;i<x;i++)
        {
            cin>>s[i];
        }
        if(x>1)
        {
            for(int i=0;i<x-1;i++) // changed the limit to x-1
            {
                if(s[i]!=s[i+1]){ // changed the condition to check if s[i] is not equal to s[i+1]
                    f=1;
                    break; // added a break statement to exit the loop if any two adjacent strings are different
                }
            }
        }
        if(f) cout<<"NO"<<endl; // fixed the output statement by changing YES to NO and vice versa
        else cout<<"YES"<<endl;
    }
   
}
