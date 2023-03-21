#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int,greater<int>>s;
    // for(int i=9;i<0;i--)
    // {
    //     int j=i;
    //     s.insert(j);
    // }
    // s.insert(1);
    // s.insert(3);
    // s.insert(10);
    // s.insert(4);
    // s.insert(10896);
   // for(int i=0;i<9;i++)
   for(auto it :s)
    cout<<it<<endl;
    if(s.empty()) cout<<"Empty";
    else cout<<"No";
    
}