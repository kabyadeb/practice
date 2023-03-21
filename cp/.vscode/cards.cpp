#define nl '\n'
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,sw;
    cin>>a>>b>>n;
    if(a>b)
    {
        sw=a;
        a=b;
        b=sw;
    }
    if(b%2==0 &&a%2==0 && (a+b)>=n) cout<<"YES"<<nl;
    else if(b%2==0 && (1+b)>=n) cout<<"YES"<<nl; 
    else if(a%2==0 && (1+a)>=n) cout<<"YES"<<nl;
    else if(n==1) cout<<"yes"<<nl;
    else cout<<"NO"<<nl;
    }
    
}