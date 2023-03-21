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
   int n,t;
   cin>>n>>t;
    string s;
    cin>>s;
    while(t>0)
    {
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='B'&&s[i+1]=='G'){
            swap(s[i],s[i+1]);
            ++i;
            }
            else continue;;
        }t--;
    }cout<<s<<nl;
    
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
