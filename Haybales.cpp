//LINK:  http://www.usaco.org/index.php?page=viewproblem2&cpid=666
/*
USACO 2016 December Contest, Silver
Problem 1. Counting Haybales
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//USING LINEAR SEARCH
/*int lin(int arr[], int n, int a, int b)
{
  int count{0};
  for (int i=0;i<n;i++)
  {
    if (arr[i]>=a && arr[i]<=b)
    {
      count++;
    }
  }
  return count;
}
main()
{
  int n,q; cin >> n >> q;
  int arr[n];
  for (int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  for (int i=0;i<q;i++)
  {
    int a,b; cin >> a >> b;
    cout << lin(arr,n,a,b);
  }
  //cout << lin(arr,n,a,b);
  return 0;
}*/
//USING BINARY SEARCH
int lowerb(ll int arr[],ll int n, ll int a)
{
  ll int low = 0;
  ll int high = n-1;
  while (low<=high)
  {
    ll int mid = (low+high)/2;
    if (arr[mid]>=a)
    {
      high=mid-1;
    }
    else
    {
      low = mid+1;
    }
  }
  return low;
}
int upperb(ll int arr[], ll int n, ll int b)
{
  ll int low=0;
  ll int high = n-1;
  while (low<=high)
  {
    ll int mid = (low+high)/2;
    if (arr[mid]<=b)
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return high;
}
int bin(ll int arr[], ll int n, ll int a, ll int b)
{
  ll int count{0};
  count = upperb(arr,n,b)-(lowerb(arr,n,a)-1);
  return count;
}
main()
{
  freopen("haybales.in", "r", stdin);
  freopen("haybales.out", "w", stdout);
  ll int n,q; cin >> n >> q;
  ll int arr[n];
  for (ll int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+n);
  for (ll int i=0;i<q;i++)
  {
    ll int a,b; cin >> a >> b;
    cout << bin(arr,n,a,b) << "\n";
  }
  return 0;
}
