#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n;cin>>n;
    string a,b;
    cin>>a>>b;
    int cnta=0,cntb=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]=='0') cnta++;
            if(b[i]=='0') cntb++;
        }
        else {
            if(a[i]=='0') cntb++;
            if(b[i]=='0') cnta++;
        }
    }
    int cza = (n+1)/2;
    int czb=n/2;
    if(cnta>=cza && cntb>=czb)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<< "NO"<<endl;
}
int  main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        solve();
    }

}