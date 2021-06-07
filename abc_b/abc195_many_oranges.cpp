#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int A, B, W;
  cin >> A >> B >> W;
  W *= 1000;

  int m = 1 << 24;
  int M = 0;
  for (int n = 1; n <= 1000000; ++n)
  {
    if (A * n <= W && W <= B * n)
    {
      m = min(m, n);
      M = max(M, n);
    }
  }

  if (M == 0)
  {
    cout << "UNSATISFIABLE" << endl;
  }
  else
  {
    cout << m << " " << M << endl;
  }

  return 0;
}
