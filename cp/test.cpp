#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
vector<ll>v;
void seive(){
bool a[sz]={0};
 for(ll i=2;i<50000;i++){
if(a[i]==0){
 for(ll j=i+i;j<50000;j+=i){
 a[j]=1;}
}
}
for(int i=2;i<50000;i++)
 if(a[i]==0) v.pb(i);
}
void solve(){
   for(auto x:v) cout<<x<<" ";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    seive();
        solve();
    
    return 0;
}
