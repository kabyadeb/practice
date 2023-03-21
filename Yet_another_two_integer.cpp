#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        a=abs(a-b);
      //  cout<<a;
       c=a/10;
       if(a%10>0) c+=1; 
       cout<<c<<"\n";
    }
}