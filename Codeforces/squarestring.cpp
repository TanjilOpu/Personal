#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,length;
    cin>>t;
    string s,s1,s2;
    while(t--)
    {
        cin>>s;
        length=s.length();
        if(length%2==1)
        {
            cout<<"NO\n";
        }
        else if(length%2==0)
        {
            length=length/2;
            for(int i=0;i<length;i++)

            {
                s1[i]=s[i];
            }
            for(int i=length;i<s.size();i++)
            {
                s2[i]=s[i];
            }
            cout<<s1<<" "<<s2<<endl;
             if(s1.compare(s2)==0)
               {
                   cout<<"YES\n";

                }
        else cout<<"NO\n";



        }


    }


    return 0;
}
