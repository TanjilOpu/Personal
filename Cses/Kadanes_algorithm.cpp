
// kadanes algorothim
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++)
   {
    cin>>v[i];
   }
   ll current_sum = v[0];
   ll max_sum = v[0];
   ll start = 0 ,end = 0,temp_start = 0;
   for(ll i=1;i<n;i++)
   {
     if(v[i]>current_sum+v[i]){
        current_sum = v[i];
        temp_start = i;
     }
     else {
        current_sum=current_sum+v[i];
     }
     if(current_sum>max_sum)
     {
        max_sum = current_sum;
        start  = temp_start;
        end =i;
     }
    // current_sum=max(v[i],current_sum+v[i]);  //if we don't need to print the subarray
    // max_sum=max(max_sum,current_sum);
   }
   cout<<max_sum<<endl;

   for(ll i=start;i<=end;i++)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;

}
// _TC
// 8
// -1 3 -2 5 3 -5 2 2

