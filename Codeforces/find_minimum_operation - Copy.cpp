#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k,take,c,count=0,sum,i,d;
        cin>>n>>k;
        if(n<k)
        {
            count=n;
        }

        else
        {
            while(n>=k)
            {
                for( i=0; i<50; i++)
                {
                    c=pow(k,i);
                    if(c>n)
                    {
                        i--;
                        break;
                    }
                }

                sum=pow(k,i);
                d=n/sum;
                                count+=d;

                n=n-sum*d;
            }
            if(n<k)
            {
                count=count+n;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
