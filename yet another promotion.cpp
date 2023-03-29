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
    int a,b,n,m,x,sum=0;
    cin>>a>>b>>n>>m;
    if(n>m)
    {
        
        x=n/(m+1);
        if(x>)
        sum=x*a;
        sum=sum+(n-(x*(m+1)))*b;
        cout<<sum<<nl;
    }
    else
    {
        if(a>b) cout<<n*b<<nl;
        else cout<<a*n<<nl;
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
