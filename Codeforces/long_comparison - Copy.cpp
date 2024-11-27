#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x1,x2,p1,p2;
    cin>>tc;
    while(tc--)
    {
        cin>>x1>>p1;
        cin>>x2>>p2;
        int po1=pow(10,p1);
        cout<<"po1 = "<<po1<<endl;
        int po2=pow(10,p2);
        cout<<"po2 = "<<po2<<endl;

        int n1=x1*po1;
        int n2=x2*po2;
        if(n1>n2)
        {
            cout<<">"<<endl;
        }
        else if(n1==n2)
        {
            cout<<"="<<endl;
        }
        else cout<<"<"<<endl;
    }
    return 0;
}
