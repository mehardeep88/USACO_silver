//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=595
/*
USACO 2016 January Contest, Silver
Problem 2. Subsequences Summing to Sevens
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
  freopen("div7.in","r",stdin);
  freopen("div7.out","w",stdout);
  int n,t; cin >> n;
  int arr[50005];
  for (int i=1;i<=n;i++)
  {
      cin >> arr[i];
  }
  int p[7],q[7];
  int count{0},maxx{0};
  for (int i=1;i<=n;i++)
  {
    arr[i]+=arr[i-1];
    arr[i]%=7;
  }
  for(int i=1;i<=n;i++)
  {
    p[arr[i]]=i;
  }
  for(int i=n;i>0;i--)
  {
    q[arr[i]]=i;
  }
  for (int i=0;i<7;i++)
  {
    maxx = max(maxx,p[i]-q[i]);
  }
  cout << maxx;
  return 0;
}
