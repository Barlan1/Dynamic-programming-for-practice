//lcs dynamic
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
 return (a>b)? a : b;
}

int lcs(char *a, char *b, int m, int n)
{
 int  L[m+1][n+1];
 int i, j;
 
for( i=0;i<=m;i++)
 {
  for(j=0; j<=n; j++)
  {
    if(i==0 || j==0) 
      L[i][j] = 0;
    else if ( a[i-1] == b[j-1])
           L[i][j]= 1+ L[i-1][j-1];
    else L[i][j]= max(L[i-1][j], L[i][j-1]);
  }
 }
return L[m][n];
}

int main()
{
 char a[]="aggtab";
 char b[]="gxtxayb";

 int m= strlen(a);
 int n= strlen(b);
 cout<<lcs(a,b,m,n);
return 0;
}
