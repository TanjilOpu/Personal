#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
    int n,k;
    cin>>n>>k;
    int it = n;
    int m  =1;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(it==0)
        {
            break;

        } 
        else if(i%k==0)
        {
            v.push_back(m);
            m++;
        }
        else 
        {
           v.push_back(it);
                   it--;

        }
       // n--;
      //  cout<<"m ="<<m<<endl;
        //cout<<"it = "<<it<<endl;
    }
    // if(k==1)
    // {
    //     reverse(v.begin(),v.end());
    // }
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
   }
 
 
 
    return 0;
}