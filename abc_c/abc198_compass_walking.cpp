#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double X, Y;
  int R;
  cin >> R >> X >> Y;
  double temp = sqrt(X * X + Y * Y);
  int num = ceil(temp);
  int ans = num / R;
  if (ans == 0)
  {
    ans = 2;
  }
  else if (num % R != 0)
  {
    ++ans;
  }

  cout << ans << endl;
  return 0;
}
