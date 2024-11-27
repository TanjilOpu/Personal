#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int cou=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1])
        {
            cou++;
        }
    }
    cout<<cou<<endl;

    return 0;
}
