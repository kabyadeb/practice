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
    int n,m=0;
    cin>>n;
    if(n>9)
  {
    for(int i=10;i<=n;i++)
    {
        int x=i,c=0,c1=0,x1;
        while(x!=0)
        {
        x1=x%10;
        if(x1==0) c++;
        x=x/10;
        ++c1;
        }
        if(c==(c1-1) ) m++;
        
    } cout<<m+9<<endl;
    
  }else cout<<n<<endl;
    }
   
}