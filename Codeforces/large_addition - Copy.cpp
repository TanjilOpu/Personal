#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        string s;
        int cnt=0;
        s=to_string(n);
        int sz=s.size();
        if(s[0]!='1' || s[sz-1]=='9')
        {
            cout<< "NO"<<endl;

        }
        else if(s[0]=='1' || s[sz-1]!='9')
        {
            for(int i=0+1; i<sz-1; i++)
            {
                if(s[i]=='0')
                {
                   cnt++;
                }

            }
             if(cnt>0)

        {
            cout<< "NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
