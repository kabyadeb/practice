#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define noo cout<<"NO"<<nl;
#define yes cout<<"YES"<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if((a+b+c)>=(x+y))
    {
        if(a+c>=x && b+c>=y)
         cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
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
