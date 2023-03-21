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
    int c = 0;
    string s="314159265358979323846264338327950288419716939937510";
    string x;
    cin>>x;
    for(int i=0;i<x.length();++i)
    {
        if(s[i]==x[i]) c++;
        else break;
    }cout<<c<<endl;
    
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
