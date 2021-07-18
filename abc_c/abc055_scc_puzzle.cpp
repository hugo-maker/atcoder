#include <iostream>
using namespace std;

int main()
{
  long long int N, M;
  cin >> N >> M;

  if (2 * N > M)
  {
    cout << M / 2 << endl;
  }
  else
  {
    long long int all_c = 2 * N + M;
    cout << all_c / 4 << endl;
  }

  return 0;
}
