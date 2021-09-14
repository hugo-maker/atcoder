#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 100000;

bool is_prime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int Q;
  cin >> Q;

  map<int, int> m;
  for (int i = 2; i <= MAX_N; ++i)
  {
    if (is_prime(i))
    {
      m.insert({i, 1});
    }
  }

  vector<int> v;
  for (int i = 3; i <= MAX_N; ++i)
  {
    if (m.count(i) && m.count((i + 1) / 2))
    {
      v.push_back(i);
    }
  }


  for (int i = 0; i < Q; ++i)
  {
    int l, r;
    cin >> l >> r;
    auto left = lower_bound(v.begin(), v.end(), l);
    auto right = upper_bound(v.begin(), v.end(), r);
    --right;
    int ans = right - left;
    if (m.count(*left) || m.count(*right))
    {
      ++ans;
    }
    cout << ans << endl;
  }

  return 0;
}
