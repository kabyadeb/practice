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
    string s,s1,s2,s3;
    cin>>s1>>s2>>s3;
    s=s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    
    if(s==s3) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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
