#include <iostream>
using namespace std;

int main()
{
  unsigned long long X, Y;
  cin >> X >> Y;

  unsigned long long cnt = 0;
  for (unsigned long long i = X; i <= Y; i *= 2)
  {
    ++cnt;
  }

  cout << cnt << endl;
  return 0;
}
