#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  vector<long long> a(61);
  a[0] = 1;
  for (int i = 1; i < 61; ++i)
  {
    a[i] = a[i - 1] * 2;
  }
  int ans = upper_bound(a.begin(), a.end(), N) - a.begin() - 1;
  cout << ans << endl;

  return 0;
}
