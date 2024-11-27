#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>h(n);
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>h[i];
        cin>>a[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(h[i]==a[j])
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
