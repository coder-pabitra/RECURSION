#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter teh size of  1st vector"<<endl;
    cin>>n;
    vector<int>a(n);
    int m;
    cout<<"enter teh size of  2nd vector"<<endl;
    cin>>m;
    vector<int>b(m);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
   for(int i=0;i<a.size();i++)
   {
        ans.push_back(a[i]);
   }
   for(int i=0;i<b.size();i++)
   {
        ans.push_back(b[i]);
   }
   sort(ans.begin(),ans.end());
   for(auto i:ans)
   {
    cout<<i<<" ";
   }

  cout<<"i am pabitra";

    return 0;
}