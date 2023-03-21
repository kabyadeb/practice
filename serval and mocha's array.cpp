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
    int n;
    cin>>n;
    int a[n],f=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) f=1;
    }
    sort(a,a+n);
    int result =a[0];
    for(int i=0;i<n;i++)
    {
        result = gcd(result,a[i]);
    }
    if( result<n) cout<<"YES"<<nl;
    else
    cout<<"NO"<<nl;
    

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
