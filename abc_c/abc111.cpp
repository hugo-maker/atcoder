#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static const int MAX = 100001;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> v[i];
  }

  vector<int> odd(MAX, 0);
  vector<int> even(MAX, 0);
  for (int i = 0; i < n; ++i)
  {
    if (i % 2 == 0)
    {
      ++odd[v[i]];
    }
    else
    {
      ++even[v[i]];
    }
  }

  vector<pair<int, int>> a;
  vector<pair<int, int>> b;
  for (int i = 1; i < MAX; ++i)
  {
    if (odd[i])
    {
      a.push_back({odd[i], i});
    }
    if (even[i])
    {
      b.push_back({even[i], i});
    }
  }

  sort(a.begin(), a.end(), greater<pair<int, int>>{});
  sort(b.begin(), b.end(), greater<pair<int, int>>{});

  if (a[0].second != b[0].second)
  {
    cout << n - (a[0].first + b[0].first) << endl;
  }
  else
  {
    cout << n - max(a[0].first + b[1].first, a[1].first + b[0].first) << endl;
  }

  return 0;
}
