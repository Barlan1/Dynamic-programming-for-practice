// longest incresing subsequence length
#include<bits/stdc++.h>
using namespace std;
int ceil_index(vector<int> &v , int l, int r, int k)
{
 int m;
 while(r-l > 1)
 {
  m= l+(r-l)/2;
  if(v[m] >= k)
   r= m;
  else 
   l= m;
 }
 return r;
}
int lis_length(vector<int> &v)
{
 vector<int> tail(v.size(), 0);
 tail[0]=v[0];
 int length=1;
 for( int i=1;i< v.size();i++)
 {
  if(v[i]< tail[0])
   tail[0]= v[i];
  else if(v[i]> tail[length-1])
   tail[length++]= v[i];
  else 
       tail[ceil_index(tail,-1,length-1,v[i])] = v[i];
 }
 return length;
}
int main()
{
 vector<int> v= {2,5,3,7,11,8,10,13,6};
 cout<<lis_length(v)<<"\n";
return 0;
}

 
  
