#include <bits/stdc++.h>
//solved 
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int s,t,c=0;
    cin>>s>>t;
     for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if(i+j+k<=s && i*j*k<=t)
                {
                    c++;
                }
            }
        }
    }cout<<c<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
