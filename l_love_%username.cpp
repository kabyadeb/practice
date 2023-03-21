#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t],gratter=0,c1=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(gratter<a[i]) 
        {
        gratter=a[i];
        c1++ ;

        }
        // if(a[i]>a[i+1]
        // {
        //     int te=a[i];
        //     a[i]
        // })
        
       // cout<<gratter<<" "<<less<<" "<< c1<<" "<<c2<<"\n";
    }
    //sort[a,a+t];
    //c1++;
    if(t>1)
    cout<<c1<<"\n";
    else if(t==1) cout<<"0"<<"\n";
    else if(t==2) cout<<"2"<<"\n";
    
}