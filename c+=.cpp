//https://codeforces.com/problemset/problem/899/A
//unsolved

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,c=0,temp;
        cin>>a>>b>>n;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        
       
        for(int i=1;i!=0;i++)
        {
            int mina=min(a,b);
            if(a>n)
            {
                cout<<c<<endl;
                break;
            }
            a=a+b;
            b=a-mina;
            c++;
        }
    }
   
}