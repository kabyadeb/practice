#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
const ll sz=2e5+7,Inf=1e9+7;
void solve(ll j){ // fix here
    long long int x,c=0; // fix here
    cin>>x;
    for(long long int i=0;x>0;i++)
    {
        if(x%2==1) c++;
        x=x/2;
    }
    if(c&1) cout<<"Case "<<j<<": odd"<<nl;
    else cout<<"Case "<<j<<": even"<<nl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1,j;
    cin>>test;
    for(j=1;j<=test;j++)
    {
        solve(j); // fixed here
    }
    return 0;
}
