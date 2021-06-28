#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, e, k;
  cin >> a >> b >> c >> d >> e >> k;

  if (b - a <= k &&
      c - a <= k &&
      d - a <= k &&
      e - a <= k &&
      b - c <= k &&
      b - d <= k &&
      b - e <= k &&
      c - d <= k &&
      c - e <= k &&
      d - e <= k)
  {
    cout << "Yay!" << endl;
  }
  else
  {
    cout << ":(" << endl;
  }

  return 0;
}
