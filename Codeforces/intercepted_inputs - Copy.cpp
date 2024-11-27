#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
            set<int>st;

    while(tc--)
    {
        int n,a,b,x;
        cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            st.insert(x);
        }
        a=st.size();
        b=1;
          cout<<a<<" "<<b<<endl;
   
    }


    
    return 0;
}