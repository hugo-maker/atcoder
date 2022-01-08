#include <iostream>
#include <vector>
#include <set>
#include <numeric>
using namespace std;
using ll = long long;

struct frac
{
  ll a, b;
  frac(ll _a = 0, ll _b = 1) : a(_a), b(_b)
  {
    if (b == 0)
    {
      a = 1;
      return;
    }
    if (b < 0)
    {
      a = -a, b = -b;
    }
    ll g = gcd(abs(a), b);
    a /= g; b /= g;
  }
  bool operator < (const frac & x) const
  {
    return a * x.b < x.a * b;
  }
};

int main()
{
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i] >> y[i];
  }
  set<frac> st;
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < i; ++j)
    {
      st.insert(frac(x[i] - x[j], y[i] - y[j]));
    }
  }
  cout << st.size() * 2 << endl;
  return 0;
}
