//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=572
/*
USACO 2015 December Contest, Silver
Problem 3. Breed Counting
*/
#include <bits/stdc++.h>
using namespace std;
main()
{
  freopen("bcount.in", "r", stdin);
  freopen("bcount.out", "w", stdout);
  int n,q; cin >> n >> q;
  int arr[100005][4];
  for (int i=1;i<=n;i++)
  {
    arr[i][1]=arr[i-1][1];     //prefsum
    arr[i][2]=arr[i-1][2];
    arr[i][3]=arr[i-1][3];
    int a;
    cin >> a;
    arr[i][a]++;
  }
  int a,b;
  for (int i=0;i<q;i++)
  {
    cin >> a >> b;
    cout << arr[b][1]-arr[a-1][1] << " " << arr[b][2]-arr[a-1][2] << " " << arr[b][3]-arr[a-1][3] << "\n";
  }
  return 0;
}
