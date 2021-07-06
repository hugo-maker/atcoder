#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int res = 0;
  int l, r;
  for (int i = 0; i < N; ++i)
  {
    cin >> l >> r;
    res += r - l + 1;
  }

  cout << res << endl;
  return 0;
}
