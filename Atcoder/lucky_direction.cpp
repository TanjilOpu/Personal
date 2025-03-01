#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   cin>>s;
   if(s=="N") cout<<"S\n";
  else if(s=="E") cout<<"W\n";
  else if(s=="W") cout<<"E\n";
  else if(s=="S") cout<<"N\n";
  else if(s=="NE") cout<<"SW\n";
  else if(s=="NW") cout<<"SE\n";
  else if(s=="SE") cout<<"NW\n";
  else if(s=="SW") cout<<"NE\n";
 
 
 
    return 0;
}