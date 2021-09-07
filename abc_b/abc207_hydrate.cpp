#include <iostream>
using namespace std;

int main()
{
  long long A, B, C, D;
  cin >> A >> B >> C >> D;
  if (B >= C * D)
  {
    cout << -1 << endl;
    return 0;
  }

  long long ans = 0;
  long long red = 0;
  long long light_blue = A;
  while (light_blue > red * D)
  {
    light_blue += B;
    red += C;
    ++ans;
  }
  cout << ans << endl;
  return 0;
}
