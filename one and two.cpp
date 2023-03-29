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
    int c,c1=0,c2=0;
    cin>>c;
    vector<int>x;
    for(int i=0;i<c;i++)
    {
        int t;
        cin>>t;
        x.pb(t);
        if(t==2) c2++;
        else c1++;
    }
    if(c2&1) cout<<"-1"<<nl;
    else if(c2!=0 ) cout<<c2/2<<nl;
    else cout<<1<<endl;
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
