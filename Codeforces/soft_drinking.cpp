#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tdrink = k*l;
    int tstdr = tdrink/nl;

     int tslic = c*d;
      int tstsltgm = p/np;
      int tooast=min(tstdr,tslic);
      int toast=min(tooast,tstsltgm);
      int result =toast/n;
      cout<<result<<endl;

    return 0;
}
