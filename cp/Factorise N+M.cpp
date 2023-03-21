
    #include<bits/stdc++.h>
    #define vi vector<int>
    #define n '\n'
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int x,sum=0;
            cin>>x;
            vi a(x);
            for(auto v:a){
            cin>>v;
            sum=sum+v;
            }
           // for(auto v:a)
            {
                if(sum%2==0) {
                cout<<"bob"<<n;
               // return v;
                }
                else {
                    cout<<"Alice"<<n;
                  //  return v;
                }
            }
        }
    }
