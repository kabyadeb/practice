//https://codeforces.com/problemset/problem/899/A
//unsolved

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,k=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==2) k++;
        if(a[i]==1) c++;

    }
    if(c>k) cout<<k+((c-k)/3)<<endl;
    
    else cout<<c<<endl;
    
   
}