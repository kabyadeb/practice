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
    int x,y;
    string s1,s2;
    cin>>x>>y;
    cin>>s1>>s2;
    if(x%2!=0)
    {
        for(int i=0;i<x;i++)
        {
            if(s1[s1.length()-1]==s1[s1.length()-2])
            {
                //cout<<s1[s1.length()-1]<<" "<<s1[s1.length()-2]<<nl;
                cout<<"NO"<<nl;
                break;
            }
            else cout<<"YES"<<nl;
            //cout<<s1[s1.length()-2]<<" "<<s1[s1.length()-2]<<nl;

            break;
        }
    }
    else if(y%2!=0)
    {   if(y==1 )
        {
            for(int i=0;i<x;i++)
        {
            if(s1[s1.length()-1]==s1[s1.length()-2])
            {
                cout<<"NO"<<nl;
                break;
            }
            else cout<<"YES"<<nl;

            break;
        }
        }
        else{
            for(int i=0;i<y;i++)
        {
            if(s2[s2.length()-1]==s2[s2.length()-2])
            {
                cout<<"NO"<<nl;
                break;
            }
            else cout<<"YES"<<nl;

            break;
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
