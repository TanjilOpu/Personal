#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  string s;
  int arr[n][n];
  for (int i = 0; i <n; i++)
  {
    cin >> s;
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] == '*')
      {
        arr[i][j] = 1;
      }
      else
      {
        arr[i][j] = 0;
      }
    }
  }
  int pre[n][n];
 pre[0][0]=arr[0][0];
    for(int i=1;i<n;i++)
    {
        pre[0][i]=pre[0][i-1]+arr[0][i];
    }
      for(int i=1;i<n;i++)
    {
        pre[i][0]=pre[i-1][0]+arr[i][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            pre[i][j]=pre[i][j-1]+pre[i-1][j]+arr[i][j]-pre[i-1][j-1];
        }
    }
    //  for (int  i = 0; i < n; i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         cout<<pre[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    
  vector<int>v;
  while(q--)
  {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    x1--;y1--;x2--;y2--;
    int a = pre[x2][y2];
    int b=0;
    if(y1>0)
    {
      b = pre[x2][y1-1];
    }
    int c=0;
    if(x1>0)
    {
      c=pre[x1-1][y2];
    }
    int d=0;
    if(x1>0 && y1>0)
    {
          d = pre[x1-1][y1-1];
    }
    // cout<<"a  = "<<a<<endl;
    // cout<<"b = "<<b<<endl;
    // cout<<"c = "<<c<<endl;
    // cout<<"d = "<<d<<endl;
    int result = a-b-c+d;
   // v.push_back(result);


    cout<<result<<endl;

  }
  // for(auto it:v)
  // {
  //   cout<<it<<endl;
  // }

  return 0;
}