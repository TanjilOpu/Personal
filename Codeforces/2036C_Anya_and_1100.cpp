#include <bits/stdc++.h>
#define y "YES"
#define n "NO"
using namespace std;
int main()
{
    string s, ans;
    char v;
    int tc, q, in;
    cin >> tc;
    while (tc--)
    {

        cin >> s>>q;
        int len = s.size();
        if(len<4)
        {
            while(q--)
            {
                cin>>in>>v;
                cout<<n<<endl;
            }
        }
        else {
            int cnt = 0;
            for(int i=0;i<len;i++)
            {
                if(s[i]=='1' && s[i+1] == '1' && s[i+2]== '0' && s[i+3] == '0')
                {
                    cnt++;
                }
            }
            while(q--)
            {
                cin>>in>>v;
                in--;
                if(s[in]!=v)
                {
                    for(int i=in-3;i<=in;i++)
                    {
                        if(i<0 || i+3>=len) continue;
                      if(s[i]=='1' && s[i+1] == '1' && s[i+2]== '0' && s[i+3] == '0')
                      {
                        cnt--;
                        break;
                      }
                    }
                    s[in]=v;
                     for(int i=in-3;i<=in;i++)
                    {
                        if(i<0 || i+3>=len) continue;
                      if(s[i]=='1' && s[i+1] == '1' && s[i+2]== '0' && s[i+3] == '0')
                      {
                        cnt++;
                        break;
                      }
                    }

                }
                if(cnt>0) cout<<y<<endl;
                else cout<<n<<endl;

            }
        }
      
      
    }
    return 0;
}