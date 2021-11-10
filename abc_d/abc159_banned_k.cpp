#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<long long, long long> m;
  vector<long long> v;
  for (int i = 0; i < N; ++i)
  {
    long long A;
    cin >> A;
    ++m[A];
    v.push_back(A);
  }

  long long ans = 0;
  for (auto it : m)
  {
    ans += it.second * (it.second - 1) / 2;
  }
  for (int i = 0; i < N; ++i)
  {
    long long val = m[v[i]];
    long long before = val * (val - 1) / 2;
    long long after = (val - 1) * (val - 2) / 2;
    cout << ans + after - before << endl;
  }
  return 0;
}
