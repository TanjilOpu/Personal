#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>vm(n);
        vector<int>vs(n+1,0);
        for(int i = 0;i<n;i++)
        {
            cin>>vm[i];
        }
         for(int i = 0;i<n;i++)
        {
            cin>>vs[i];
        }
        int sm=0,ss=0;
        for(int i=0;i<n;i++)
        {
            if(vm[i]>vs[i+1])
            {
                sm = sm+vm[i];
                ss = ss+vs[i+1];
            }
        }
        int result = sm-ss;
        cout<<result<<endl;
    }
 
 
 
    return 0;
}