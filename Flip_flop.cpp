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
    int x,c1=0,c2=0;
    cin>>x;
    int a[x];
    for(int i=0;i<x;++i)
    {
        cin>>a[i];
        if(a[i]==-1) c1++;
        else c2++;
    }
    //if(c1>c2) cout<<c1<<nl;
    //else if(c2>c1) cout<<-c2<<nl;
     if(c1==c2) cout<<c1+c2<<nl;
     else cout<<c1-c2<<nl;
    
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
