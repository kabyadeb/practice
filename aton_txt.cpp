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
    int c=0;
    cin>>s;
    for(int i=1;i<s.size()-1;i=i+2)
    {
        if(s.size()<3) break;
        else
        for(int i=3;i<s.size()-1;i=i+2)

    {
        if(s[i]==s[j]) c++;
    }
    cout<<c<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll test=1;
//    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
