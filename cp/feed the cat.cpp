


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float sum;
   float  hh,hx,mm,h,d,c,n;
   cin>>hh>>mm>>h>>d>>c>>n;
   if(hh<20 && mm==0)
   {
        hx=(((20-hh)*60+(mm))+h)*d;
    }
    else if(hh<20 && mm>0)
   {
        hx=(((20-hh)*60+(60-mm))+h)*d;
    }
    else if(hh>20 && mm==0) hx=(((hh)*60+mm)+h)*d;
        sum=(0.8*hx*c/n);


   cout<<hx<<" "<<sum<<'\n';

}
