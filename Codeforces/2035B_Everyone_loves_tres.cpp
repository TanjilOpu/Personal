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
        int t=n;
        string s;
        if(n==1 || n==3) cout<<-1<<endl;
        else {
            if(n%2==0)
            {
                for(int i=0;i<n-2;i++)
                {
                    cout<<3;
                }
                cout<<66<<endl;
            }
            else{
                for(int i=0;i<n-5;i++)
                {
                    cout<<3;
                }
                cout<<36366<<endl;
            }
        }
        
    }
}