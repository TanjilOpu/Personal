#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string h="hello";
    int a=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==h[a])
        {
            a++;
            c++;
        }

    }
    if(c==5)
        cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
