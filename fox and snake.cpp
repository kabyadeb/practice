#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y,a=1;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        if(i%2)
        {
            for(int j=0;j<y;j++)
            {
                cout<<"#";
            }cout<<endl;
            //a=0;
        }
        else
        {
            if(a){
            for(int j=0;j<y-1;j++)
            {
                cout<<".";
            }cout<<"#"<<endl;
            a=0;
          }
          else{
            a=1;
            cout<<"#";
            for(int j=0;j<y-1;j++)
            {
                cout<<".";
            }cout<<endl;
          }
        }
        
    }
}
