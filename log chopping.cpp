#include <bits/stdc++.h>
//unsolved
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    int x,c0=0,c1=0;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        if((a[i]%2)+1<a[i] && i&1) c1++;
        else if(((a[i]%2)+1 )< a[i] && i%2==0) c0++;
        else if(i&1) c1--;
        else c0--; 
    }
    if(c1>c0) cout<<"maomao90"<<nl;
    else cout<<"errorgorn"<<nl;
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
