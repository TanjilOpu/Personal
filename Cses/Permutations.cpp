#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    
    
        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 0)
            {
                 v.push_back(i);
            }
        }
          for (int i = 1; i <= n; i++)
        {
            if(i%2 == 1)
            {
                 v.push_back(i);
            }
        }

   
    int f=0;
        for(int i=1;i<n;i++)
    {
        if(abs(v[i]-v[i-1])==1)
        {
            f=1;
            break;
        }
        
    }
    if(f==1)  cout << "NO SOLUTION\n";
    else 
    {
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}