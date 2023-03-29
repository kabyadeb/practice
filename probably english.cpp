#include<bits/stdc++.h>
using namespace std;
#define  ll long long int 
#define  all(x)  x.begin(),x.end()
#define  ll long long int  
int const mod = 1e9+7; 
void solve(){
	int n; cin >> n; string s; 
	map < string, bool >c; 
	while( n -- ) {
		 cin >> s; 
		 c[s] = true; 
	}
	if( c["and"]||c["not"]||c["that"]||c["the"]||c["you"])
      cout <<"No\n"; 
      else cout << "Yes\n"; 	       
	         
	         
	         
	               
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	
    int t = 1; //cin >> t;
    while(t--) 
    solve(); 
	   
 return 0; 
}
 