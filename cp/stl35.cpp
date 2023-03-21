
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,reachedA=0,unreachedA=0,reachedB=0,unreachedB=0,A=0,B=0;
    cin>>n;
    int t,x,y;

    while(n--){
            cin>>t>>x>>y;

        if(t==1)
        {

            reachedA=reachedA + x;
            unreachedA = unreachedA +y;
            A++;
            A=A+10;
        }
        if(t!=1)
        {
            reachedB = reachedB + x;
            unreachedB = unreachedB + y;
            B++;
            B=B+10;
        }

        if(t==1)
        {
        if((A/2)<=reachedA){
            cout<<"LIVE"<<endl;
            }
        else{
            cout<<"DEAD"<<endl;
            }
        }
        else if(t!=1){
            if((B/2)<=reachedB){
            cout<<"LIVE"<<endl;
        }
        else{
            cout<<"DEAD"<<endl;
        }
    }
    }

}
