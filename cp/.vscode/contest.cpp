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
    int s,n,c=0;
    cin>>s>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i<<" "<<a[j]<<endl;
            if((i!=a[j])&&((i-1)!=a[j+1])||((i+1)!=a[j+1])) c++;
            else continue;;
        }
    }  cout<<c<<nl;  
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
