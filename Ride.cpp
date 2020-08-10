/*
ID: meh7dee1
TASK: ride
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
main()
{
  freopen("ride.in", "r", stdin);
  freopen("ride.out", "w", stdout);
  string s1;
  string s2;
  cin >> s1;
  cin >> s2;
  int prod1{1}, prod2{1};
  for (int i=0;i<s1.length();i++)
  {
    prod1=prod1*(int((s1[i]-'A')+1));
    //cout << (s1[i]-'A')+1 << "\n";
    //cout  << prod1 << "\n";
  }
  for (int i=0;i<s2.length();i++)
  {
    prod2=prod2*(int((s2[i]-'A')+1));
    //cout << (s2[i]-'A')+1 << "\n";
    //cout << prod2 << "\n";
  }
  if (prod1%47==prod2%47)
  {
    cout << "GO" << "\n";
  }
  else
  {
    cout << "STAY" << "\n";
  }
  return 0;
}
