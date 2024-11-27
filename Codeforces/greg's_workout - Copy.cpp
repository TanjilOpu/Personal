#include<bits/stdc++.h>
using namespace std;
int main()
{
    int as,cest=0,bak=0,bicep=0,p;
    cin>>as;
    vector<int>v(as+1);
    for(int i=1; i<=as; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=as; i++)
    {
        int m=i/3;
        p=i-3*m;
        if(p==1)
        {
            cest = cest+v[i];
        }
        else if(p==2)
        {
            bicep = bicep+v[i];
        }
        else
        {
            bak = bak+v[i];
        }
    }
    string r;
    int  res;
    if(cest>bicep)
    {
        r= "chest";
        res=cest;
    }
    else
    {
        r="biceps";
        res=bicep;

    }
    if(res<bak)
    {
        r="back";
    }
    else
    {
        r=r;
    }
    cout<<r<<endl;




    return 0;
}
