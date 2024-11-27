#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
            vector<int>v;

    while(tc--)
    {
        int n,s,m,l,r,d,cont;
        cin>>n>>s>>m;
        for(int i=0;i<n;i++)
        {

            cin>>l>>r;
            v.push_back(l);
            v.push_back(r);

        }

        for(int i=0;i<n*2;i++)
        {
            if(i==0) 
            {
                d=v[i];
                if(d==s)
                {
                    cout<< "YES"<<endl;
                    break ;
                }
            }
            else if(i>1 && i<n*2-2)
            {
                if(i%2==1)
                {
                    cont=v[i];
                }
                if(i%2==0)
                {
                    d=v[i]-cont;
                    if(d==m)
                    {
                        cout<<"YES"<<endl;
                        break;
                    }
                }
               
            }
            else if(i==n*2-1)
                {
                    d=m-v[i];
                    if(d==s)
                    {
                        cout<<"YES"<<endl;
                        break ;
                    }
                }
                cout<<"NO"<<endl;
        }
    //    for(int i=0;i<n*2;i++)
    //    {
    //     cout<<v[i];
    //    }
    //    vector<int>v(n*2+1,0);
   // cout<<"NO"<<endl;
    }
    return 0;
}


