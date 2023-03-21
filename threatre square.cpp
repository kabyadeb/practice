//https://codeforces.com/contest/1766/problem/A
//unsolved

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k] && a[i]>0)
        {
            c++;
        }
    }
    cout<<c<<endl;
   
}