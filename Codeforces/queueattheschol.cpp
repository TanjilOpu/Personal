#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sl,t;
    cin>>sl>>t;
    string s;
    for(int i=0;i<sl;i++)
    {
        cin>>s[i];
    }
    while(t--)
    {
        //for(int i=0;i<t;i++)
       // {
            for(int j=0;j<=sl;j++)
           {
                if(s[j]=='B'&&s[j+1]=='G')
                {
                    char temp =s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                    j++;

                }
            }
       // }
    }
    for(int i=0;i<sl;i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}