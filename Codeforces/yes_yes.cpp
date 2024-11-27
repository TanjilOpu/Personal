#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
    string s;
    cin>>s;
    if(s.size()==1)
    {
        if(s[0]=='e' || s[0]=='s')
        {
            cout<<"yes\n";
            break;
        }
    }
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='e' && s[i+1]=='s')
        {
              continue;
        }
        else if(s[i]=='s' && s[i+1]=='Y')
        {
            continue;
        }
        else if(s[i]=='Y' && s[i+1]=='e')
        {
            continue;
        }
        else 
        {
            cout<<"No"<<endl;
            exit(1);
        }

        
    }
    cout<<"Yes"<<endl;
   }


    return 0;

}