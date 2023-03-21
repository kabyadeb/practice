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
    int x;
    cin>>x;
    string s;
    cin>>s;
    int r=0,u=0,flag=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='R') r++;
        if(s[i]=='L') --r;
        if(s[i]=='U') ++u;
        if(s[i]=='D') --u;
        if(r==1&& u==1) {
            flag=1;
            break;
        };
    }
    if(flag==1)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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
