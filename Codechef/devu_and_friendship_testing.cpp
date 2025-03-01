#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int frnd = n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] == v[j + 1])
                {
                    c++;
                    flag = 1;
                }
                else
                {
                    break;
                }
            }
            if(flag == 1)
            {
             //   cout<<" fdkf  = "<<frnd<<endl;
               // cout<<"c = "<<c<<endl;
            frnd = frnd - c;
            //cout<<"frnd = "<<frnd<<endl;
            flag=0;

            }
        }
        cout << frnd << endl;
    }
}