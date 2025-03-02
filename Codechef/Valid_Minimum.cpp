#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b || b==c || c==a)
        {
            if(a==b && b==c)
            {
                cout<<"YES"<<endl;
            }
            else{
                if(a==b && a<c)
                {
                    cout<<"YES"<<endl;
                }
                else if(a==c && a<b)
                {
                    cout<<"YES"<<endl;
                }
                else if(b==c && b<a)
                {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}