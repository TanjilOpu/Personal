#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int  n=stoi(s);
    int m=1;
    for(int i=1; i<=l; i++)
    {
        m=m*10;
        int r=n%m;
        n=n-r;
        if(r>=(5*(m/10)))
        {
            cout<< "-O|";
            r=r-5*(m/10);
        }
        else
        {
            cout<< "O-|";
        }
        if(r==0)
        {
            for(int i=1; i<=4; i++)
            {
                if(i==1)
                {
                    cout<< "-O";
                }
                else cout<<"O";
            }
        }
        else
        {
            for(int i=1; i<=r/(m/10); i++)
            {
                if(i==r/(m/10))
                {
                    cout<< "O-";
                }
                else
                    cout<< "O";
            }
            for(int i=(r/(m/10))+1; i<=4; i++)
            {
                if(r==0)
                {
                    cout<< "-O";
                }
                else cout<< "O";
            }
        }
        cout<<endl;
    }
    return 0;
}
