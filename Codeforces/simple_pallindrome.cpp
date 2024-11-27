#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        string s;
        int l=n/5;
        if(l>0)
        {
            while(l--)
            {
                s=s+"aeiou";
            }
        }
        n=n%5;
        string s1="aeiou";
        for(int i=0;i<n;i++)
        {
            s=s+s1[i];
        }

        sort(s.begin(),s.end());
           cout<<s<<endl;

    }
    return 0;
}
