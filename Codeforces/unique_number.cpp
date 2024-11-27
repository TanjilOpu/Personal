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
        string s;
        if(n>45)
        {
             cout<<-1<<endl;
        }
        else 
        for(int i=9;i>=1;i--)
        {
            if(n-i>=0)
            {
                n=n-i;
                s+=i+48;
            }
            if(n==0) break;

        }
            reverse(s.begin(), s.end());
            cout<<s<<endl;

                  
    }


    return 0;
}