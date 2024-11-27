#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    strlwr(s1);
    cin>>s2;
        strlwr(s2);
  int sum1=0;
    for(int i=0;i<s.size();i++)
    {
        sum1=sum1+s1[i];
    }
     int sum2=0;
    for(int j=0;j<s.size();j++)
    {
        sum2=sum2+s2[i];
    }
    if(sum1==sum2)
        cout<<"0"<<endl;
    if(sum1<sum2)
        cout<<"-1"<<endl;
        if(sum1==sum2)
        cout<<"1"<<endl;



    return 0;
}
