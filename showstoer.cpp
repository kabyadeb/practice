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
  int n; cin>>n;
  vector<int>v1(n),v2(n);
  for(int i=0;i<n;i++)  cin>>v1[i];
  for(int i=0;i<n;i++) cin>>v2[i];
  for(int i=0;i<n;i++){
    if(v1[i]<v2[i]) swap(v1[i],v2[i]);
  }
  bool ok=false;
    int a=*max_element(all(v1));
    int b=*max_element(all(v2));
   if(a==v1[n-1]&&b==v2[n-1]){
   cout<<"Yes"<<nl;
  }
  else cout<<"No"<<nl;
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
