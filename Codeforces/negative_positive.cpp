#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,result;
        cin >> n;
        int arr[n];
        int abs_sum = 0;
        int sumc = 0;
        int c0andminus = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            abs_sum += abs(arr[i]);
            sumc += arr[i];
            if (arr[i] <= 0)
            {
                c0andminus++;
            }
             result = sumc;
        }
        //cout<<"c0andminus = "<<c0andminus<<endl;
        if (c0andminus >= 2)
        {
            int min= 1000;
            int calsum = 0, t;
            for (int i = 0; i < n; i++)
            {
               if(arr[i]<min)
               {
                min=arr[i];
                t=i;
               }
            }
                if (min<=0)
                {
                    int plus1 = arr[t+1];
                    int minus = arr[t-1];
                    if (plus1 < minus)
                    {
                        t = t;
                    }
                    else
                        t = t - 1;
                        //cout<<"t = "<<t<<endl;
                }
            
            for(int i=0;i<n;i++)
            {
                if (i == t)
                {
                    arr[i] = arr[i]*(-1);
                    //cout<<"arr[t]"<<arr[i]<<endl;
                }
                if (i == (t + 1))
                {
                    arr[i] = arr[i]*(-1);
                    //cout<<"arr[t+1]"<<arr[i]<<endl;

                }
                calsum = calsum+arr[i];
                //cout<<"calsum = "<<calsum<<endl;
                 result = calsum;
            }
        }
        cout<<result<<endl;

    }
    return 0;
}