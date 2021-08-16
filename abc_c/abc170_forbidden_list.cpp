#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int X, N;
  cin >> X >> N;
  vector<bool> v(102, true);
  int p;
  for (int i = 0; i < N; ++i)
  {
    cin >> p;
    v[p] = false;
  }

  vector<int> a;
  for (int i = 0; i < 102; ++i)
  {
    if (v[i])
    {
      a.push_back(i);
    }
  }

  int diff = 100;
  int tmp = 0;
  int ans = N;
  for (int i = 0; i < (int)a.size(); ++i)
  {
    tmp = abs(X - a[i]);
    if (tmp < diff)
    {
      diff = tmp;
      ans = a[i];
    }
  }

  cout << ans << endl;
  return 0;
}
