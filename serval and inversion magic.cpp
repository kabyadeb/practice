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
    int x,f=0;
    cin>>x;
    string s,b;
    cin>>s;
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]==0) b[i]=1;
    //     else b[i]=0;
    // }
    int start = 0, end = b.length() - 1;

    while (start < end) {
        if (s[start] != s[end]) {
           // cout << s << " is not a palindrome" << endl;
            f=1;
        }
        start++;
        end--;
    }if(f==1) cout<<"NO"<<nl;
    else  cout<<"YES"<<nl;

    
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
