
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum1=0,sum2=0;
        cin>>x;
        for(int i=1;i<=x/2;i++)
        {
            sum1=sum1+i*2;


        }
        for(int i=1;i<=x/2;i++)
        {
            sum2=sum2+2*i-1;
            if(sum1==sum2) {
                cout<<"yes"<<
                break;
            }
            else if(sum2>sum1){


            }
        }
    }
}


