#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    map<string ,string>mp;
    for(int i=0;i<n;i++)
    {
        string key,value;
        cin>>key>>value;
        value+=";";
        mp[value] = key;
    }
    for(int i=0;i<k;i++)
    {
        string key,value;
        cin>>key>>value;
        cout<<key<<" "<<value<<" #"<<mp[value]<<endl;


    }

}