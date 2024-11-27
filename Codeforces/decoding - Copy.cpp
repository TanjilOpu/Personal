#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
      string s;
      for(int i=0;i<l;i++)
      {
        cin>>s[i];
      }
       for(int i=0;i<l;i++)
      {
        cout<<s[i];
      }
      cout<<endl;
      int ss=s.size();
      vector<char>v;
      while(ss>0)
      {
        if(ss%2!=0)
        {
            int od=ss/2;
             s.erase(s[od]);
            v.push_back(s[od]);
           ss=s.size();
           cout<<"string  ="<<s<<endl;
        }
        else if(ss%2==0)
        {
            int ev=ss/2;
              s.erase(s[ev]);
            v.push_back(s[ev]);
            ss=s.size();
            cout<<"string  ="<<s<<endl;

        }


      }
       for(int i=0;i<l;i++)
      {
        cout<<v[i];
      }
      cout<<endl;
      

    return 0;
}