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
    int x,sum=0,c=0;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(sum<0 && a[i]==-1) c++;
        if(sum<0)sum=0;
    }cout<<c<<nl;
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
   // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
