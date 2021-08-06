#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  int l, r;
  int L = 0;
  int R = 1 << 29;
  for (int i = 0; i < M; ++i)
  {
    cin >> l >> r;
    L = max(L, l);
    R = min(R, r);
  }

  if (R - L + 1 > 0)
  {
    cout << R - L + 1 << endl;
  }
  else
  {
    cout << 0 << endl;
  }
  return 0;
}
