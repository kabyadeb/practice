#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=1,b=0,c=1,d=1;
        cin>>n;
       // a=1;
        b=n-2-a;
       // if((a==b && a>1)||(a%2==0&&b%2==0)){ a=a-1;
        //b=b+1;
        //}
        //cout<<a<<" ";
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
}
