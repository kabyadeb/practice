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
        
        while(x>2020)
        {
            if(x%2==0) x=x-2020;
            else x=x-2021;
            if(x==2021||x==2020) 
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(x<2020) cout<<"NO"<<endl;
        
    }
}