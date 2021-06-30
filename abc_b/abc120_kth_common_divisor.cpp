#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> enum_divisors(int n)
{
  vector<int> res;
  for (int i = 1; i * i <= n; ++i)
  {
    if (n % i == 0)
    {
      res.push_back(i);
      if (n / i != i)
      {
        res.push_back(n / i);
      }
    }
  }
  sort(res.begin(), res.end());
  return res;
}

int main()
{
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> a = enum_divisors(A);
  vector<int> b = enum_divisors(B);

  vector<int> res;
  set_intersection(a.begin(), a.end(), b.begin(), b.end(), inserter(res, res.end()));
  sort(res.begin(), res.end(), greater<int>{});

  cout << res[K - 1] << endl;

  return 0;
}
