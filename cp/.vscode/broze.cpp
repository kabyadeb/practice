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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='-'&& s[i+1]=='.'){ cout<<1;++i;}
        else if(s[i]=='-'&& s[i+1]=='-') { cout<<2;++i;}
        else cout<<0;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
   // cin>>test;
    while(test--)
    {
        solve();
        cout<<nl;
    }
    return 0;
}
