#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int b1=b%2;
        int r=a-(b1*2);
        cout<< " r = "<<r<<endl;
        if( r>=0 &&  r%2==0)
        {
            cout<< "YES"<<endl;
        }
        else cout<< "NO"<<endl;
    }

}
