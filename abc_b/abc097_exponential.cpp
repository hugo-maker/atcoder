#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<pair<long long, long long>> prime_factorize(long long n)
{
  vector<pair<long long, long long>> res;
  for (long long a = 2; a * a <= n; ++a)
  {
    if (n % a != 0)
    {
      continue;
    }
    long long ex = 0;

    while (n % a == 0)
    {
      ++ex;
      n /= a;
    }

    res.push_back({a, ex});
  }

  if (n != 1)
  {
    res.push_back({n, 1});
  }
  return res;
}

int main()
{
  double X;
  cin >> X;

  int ans = 1;
  for (int i = X; i >= 1; --i)
  {
    vector<pair<long long, long long>> temp = prime_factorize(i);
    // i が べき乗数であるとき
    if (temp.size() == 1 && temp[0].second >= 2)
    {
      ans = i;
      break;
    }
  }

  for (double i = X; i >= 1.0; --i)
  {
    if (sqrt(i) == ceil(sqrt(i)))
    {
      ans = max(ans, (int)i);
    }
  }

  if (X == 1000)
  {
    ans = 1000;
  }

  cout << ans << endl;
  return 0;
}
