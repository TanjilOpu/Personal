#include <bits/stdc++.h>
using namespace std;
int f(int a , int b)
{
    if(a>b) 
    {
        return 1;
    }
    else if(a==b)
    {
        return 0;
    }
    else return -1;

}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a1, a2, b1, b2;
        int ca = 0, cb = 0;
        cin >> a1 >> a2 >> b1 >> b2;
        if(f(a1,b1)+f(a2,b2)>0) ca++;
        if(f(a1,b2)+f(a2,b1)>0) ca++;
        if(f(a2,b1)+f(a1,b2)>0) ca++;
        if(f(a2,b2)+f(a1,b1)>0) ca++;
        
       cout<<ca<<endl;

    }
    return 0;
}