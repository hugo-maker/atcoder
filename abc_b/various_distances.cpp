#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
  cout << fixed << setprecision(15);

  int N;
  cin >> N;
  vector<int> x(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i];
  }

  long manhattan = 0;
  long euclid = 0;
  int chebyshev = 0;

  for (int i = 0; i < N; ++i)
  {
    manhattan += abs(x[i]);
    euclid += abs(x[i]) * (long)abs(x[i]);
  }

  for (int i = 0; i < N; ++i)
  {
    chebyshev = max(chebyshev, abs(x[i]));
  }

  cout << manhattan << endl;
  cout << sqrt(euclid) << endl;
  cout << chebyshev << endl;

  return 0;
}
