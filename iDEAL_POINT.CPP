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
    int n,k,f=0,g=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==k) f=1;
        if(x==k) g=1;
    }
    if(f && g) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
