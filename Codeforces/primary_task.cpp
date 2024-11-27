#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n>=102 && n<=109)
         cout<< "YES"<<endl;
         else if(n>=1010 && n<=1099)
                     cout<< "YES"<<endl;

        else cout<< "NO"<<endl;
    }
    return 0;
}
