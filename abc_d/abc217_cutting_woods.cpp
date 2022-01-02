#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int L, Q;
  cin >> L >> Q;
  set<int> s;
  s.insert(0);
  s.insert(L);
  for (int qi = 0; qi < Q; ++qi)
  {
    int c, x;
    cin >> c >> x;
    if (c == 1)
    {
      s.insert(x);
    }
    else
    {
      auto it = s.lower_bound(x);
      int r = *it;
      --it;
      int l = *it;
      int ans = r - l;
      cout << ans << endl;
    }
  }
  return 0;
}
