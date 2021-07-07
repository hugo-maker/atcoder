#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int res = 0;
  for (int i = 6; i >= 0; --i)
  {
    res = pow(2, i);
    if (res <= N)
    {
      cout << res << endl;
      return 0;
    }
  }

  return 0;
}
