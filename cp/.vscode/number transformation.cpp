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
    int a,b,c,d;
    cin>>a>>b;
    int x=b/a;
    if((x<=0)||(a>b)||(b%a!=0))cout<<"0"<<" "<<"0"<<nl;
    else
    {
        c=1;
        //if(x==1) cout<<c+1<<" "<<x<<nl;
        //else
         cout<<c<<" "<<x<<nl;
    }    
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
