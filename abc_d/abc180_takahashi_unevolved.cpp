#include <iostream>
using namespace std;

int main()
{
  long long X, Y, A, B;
  cin >> X >> Y >> A >> B;
  long long ans = 0;
  long long cnt = 0;
  while (X < Y)
  {
    long long tmp = cnt + (Y - X - 1) / B;
    ans = max(ans, tmp);
    if (X >= (Y + A - 1) / A)
    {
      break;
    }
    X *= A;
    ++cnt;
  }
  cout << ans << endl;
  return 0;
}
