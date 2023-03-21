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
    int x,y,sum=0;
    cin>>x>>y;
    int n=x+y;
    int a[n+1];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        //cout<<a[i];
    }
    
    for(int i=(n-1);i>=y;--i)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
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
