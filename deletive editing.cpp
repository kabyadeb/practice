#include <bits/stdc++.h>
//unsolve https://codeforces.com/problemset/problem/1666/D
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
    string s,t;
    int i,j,c=0;
    cin>>s>>t;
    for( i=0;i<(int)t.size();i++)
    {
        j=c;
        for(j=0;j<(int)s.size();j++)
        {
            
            if(s[j]==t[i])
            {
                cout<<"s[i] ::"<<s[j]<<" t[j] ::"<<t[i]<<endl; 
                c++;
                
            }
        }
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
