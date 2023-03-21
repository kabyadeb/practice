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
    int x,sum=0,sum2=0;
    cin>>x;
    if((x/2)%2) cout<<"NO"<<nl;
    else
    { 
        cout<<"YES"<<nl;
        int a[x/2];
        for(int i=2;i<=x;i+=2)
        {
            cout<<i<<" ";
            sum=sum+i;
            
        }
        for (int i=1;i<(x-1);i+=2)
        {
            cout<<i<<" ";
            sum2=sum2+i;
        }cout<<sum-sum2<<nl;
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
