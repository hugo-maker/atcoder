#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long N, M;
  cin >> N >> M;

  if (N == 1 && M == 1)
  {
    cout << 1 << endl;
  }
  else 
  {
    cout << abs((N - 2) * (M - 2)) << endl;
  }

  return 0;
}
