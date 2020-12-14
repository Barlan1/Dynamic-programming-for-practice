//longest palindromic subsequence
#include<bits/stdc++.h>
using namespace std;
int lps(char *seq, int s, int e)
{
 if(s==e)
  return 1;
 if(seq[s]==seq[e] && s+1==e)
  return 2;
 if(seq[s]==seq[e])
  return 2+ lps(seq,s+1,e-1);
 return max(lps(seq,s,e-1),lps(seq,s+1,e));
}
int main()
{
 char seq[]="malyalam";
 int n= strlen(seq);
 cout<< lps(seq,0,n-1)<<" ";
 return 0;
}
