#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long X, K, D;
  cin >> X >> K >> D;
  X = abs(X);

  if (X / D >= K)
  {
    cout << X - D * K << endl;
  }
  else if (X / D < K)
  {
    if ((X / D) % 2 == K % 2)
    {
      cout << X % D << endl;
    }
    else
    {
      cout << D - X % D << endl;
    }
  }

  return 0;
}
