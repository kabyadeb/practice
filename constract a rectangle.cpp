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
    int x,y,z;
    cin>>x>>y>>z;
    if(x%2==0||y%2==0||z%2==0)
    {
        if(abs(x-y)>z||abs(x-z)>y||abs(y-z)>x)
        cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }
    else cout<<"NO"<<nl;
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
