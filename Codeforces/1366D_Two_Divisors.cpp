#include<bits/stdc++.h>
using namespace std;
const int mx=1e7+5;
int arr[mx];
int main()
{
    arr[1]=1;
    for(int i=2;i<mx;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i;j<mx;j+=i)
            {

                if(arr[j]==0)
                {

                    arr[j]=i;
                }
            }
        }
    }

   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }

   vector<int>va(n,-1);
   vector<int>vb(n,-1);
   for(int i=0;i<n;i++)
   {

       int x=v[i];
       int prime = arr[x];
       int temp=x;
       while(temp%prime==0)
       {

           temp/=prime;
       }
       if(temp>2)
       {
           va[i]=prime;
           vb[i]=temp;
       }
   }
   for(int i=0;i<n;i++)
   {

       cout<<va[i]<< " ";
   }
   cout<<endl;
   for(int i=0;i<n;i++)
   {

       cout<<vb[i]<< " ";
   }
   cout<<endl;



}
