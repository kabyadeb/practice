#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int x,f=0;
    cin>>x;
    string s;
    cin>>s;
    for(int i=0;i<=x;i++)
    {
        for(int j=i+1;j<=x;j=j+2)
        {
           // cout<<"s[i] :: "<<s[i]<<" s[j]:::"<<s[j]<<endl;
         if((s[i]==s[j]))
         {
            f=1;
            //cout<<"mama paisi ureka"<<nl;

            break;
          }
        }

    }if(f==1) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
