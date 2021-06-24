#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  if (N % 2)
  {
    cout << ((double)N + 1) / (2 * N) << endl;
  }
  else
  {
    cout << (double)N / (2 * N) << endl;
  }

  return 0;
}
