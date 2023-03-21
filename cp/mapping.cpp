

#include<iostream>
#include<bits/stdc++.h>
#define ff .first
#define ll long long int
#define n '\n'
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,sum=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        for(ll i=1;i!=0;i=++i)
        {
            if(sum<9)
            {
                cout<<"NO"<<n;
                break;
            }
            else
            {
                if(sum==(7*i)+2){
                    cout<<"YES"<<n;
                    break;

                }
                else if(sum<(7*i)+2)
                {
                    cout<<"NO"<<n;
                    break;
                }
                else continue;

            }
        }
    }

}
