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
    int x,c=0;
    cin>>x;
    if(x%7==0&&x%3==0) cout<<x/3<<nl;
    else if(x%7) cout<<x/3<<nl;
    else 
    cout<<x/7<<nl;
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
