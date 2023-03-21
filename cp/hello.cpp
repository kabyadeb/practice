#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        int x;
        cin>>x;
        int a[x],b[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        sort(b,b+x);
        for(int i=0;i<x;i++)
        {
            if(b[x-1]==a[i]) cout<<b[x-1]-b[x-2];
            else  cout<<a[i]-b[x-1];
            cout<<" ";
        }cout<<'\n';

   }

}
