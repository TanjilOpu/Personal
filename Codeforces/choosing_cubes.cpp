#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        f--;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int fv=v[f];
        sort(v.rbegin(),v.rend());
       // for(auto it:v) cout<<it<<" ";
        int ps=0,ss=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]==fv) ps++;
        }
        for(int i=k;i<n;i++)
        {
            if(v[i]==fv) ss++;
        }
      //  cout<<"ps = "<<ps<<" "<<"ss = "<<ss<<endl;
        if(ps>0 && ss>0) 
        {
            cout<<"MAYBE"<<endl;
        }
        else if(ps==0 && ss>0)
        {
            cout<<"NO"<<endl;
        }
        else if(ss==0 && ps>0)
        {
            cout<<"YES"<<endl;
        }
    }
}