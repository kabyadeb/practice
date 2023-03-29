#include <bits/stdc++.h>
//usolved problem 
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
    int a=0,b=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A') a++;
        else b++;
    }
    if(s.size()<2) cout<<"NO"<<endl;
    else
    {
        if(s[0]=='A'&& s[s.size()-1]=='B' && a>=b)
        cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
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
