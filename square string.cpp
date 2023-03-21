#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c=0;
        string s;
        cin>>s;
        if(s.size()%2==0)
        {
            for(int i=0;i<(int)s.size()/2;i++)
            {
                if(s[i]==s[s.size()/2+i]) c++;
                // else
                // {
                //     cout<<"NO"<<endl;
                // }
            }
            if(c==(int)s.size()/2) 
                 cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
        
    }
}
