#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
long long int t;
cin>>t;
vector<long long int>v;
long long int sum=0;
for(long long int i=0;i<t;i++)
{
     long long int in;
    cin>>in;
    sum=sum+in;
    v.push_back(in);


}
long long int s=sqrt(sum);
if(s*s==sum)
{
    cout<<"Yes\n";

}
else cout<<"no\n";

    }

    return 0;
}