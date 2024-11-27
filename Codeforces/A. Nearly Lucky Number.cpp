#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    long long int n;
    cin>>n;
    string s;
    s=to_string(n);
    int c=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
                        c++;
        }
    }
    if(c==4||c==7)
    cout<<"YES\n";
   else
        cout<<"NO\n";
    return 0;
}
