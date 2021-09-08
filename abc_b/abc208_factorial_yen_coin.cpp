#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int P;
  cin >> P;
  vector<int> v(10);
  v[0] = 1;
  for (int i = 1; i < 10; ++i)
  {
    v[i] = v[i - 1] * (i + 1);
  }

  int ans = 0;
  while (P)
  {
    auto iter = upper_bound(v.begin(), v.end(), P);
    --iter;
    int num = *iter;
    ans += P / num;
    P %= num;
  }

  cout << ans << endl;
  return 0;
}
