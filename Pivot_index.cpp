//LINK: https://leetcode.com/problems/find-pivot-index/
/*
Leetcode Problem:
724. Find Pivot Index
*/
main()
{
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    int arr[n];
    int pref[n];
    int suf[n];
    for (int i=0;i<n;i++)
    {
      cin >> arr[i];
      if (i==0)
      {
        pref[i]=arr[i];
      }
      else
      {
        pref[i]=pref[i-1]+arr[i];
      }
    }
    for (int i=n-1;i>=0;i--)
    {
      if (i==(n-1))
      {
        suf[i]=arr[i];
      }
      else
      {
        suf[i]=suf[i+1]+arr[i];
      }
    }
    int count{0};
    for (int i=1;i<n-1;i++)
    {
      if (pref[i]==suf[i])
      {
        cout << arr[i] << "\n";
      }
      else
      {
        cout << -1 << "\n";
      }
    }
  }
  return 0;
}
