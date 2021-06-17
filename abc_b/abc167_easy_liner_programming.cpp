#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1 << 29;

int main()
{
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  int rest = INF;
  int ans = 0;

  ans += min(A, K);
  rest = K - A;
  if (rest <= 0)
  {
    cout << ans << endl;
    return 0;
  }

  rest -= B;
  if (rest <= 0)
  {
    cout << ans << endl;
    return 0;
  }

  ans -= rest;

  cout << ans << endl;

  return 0;
}
