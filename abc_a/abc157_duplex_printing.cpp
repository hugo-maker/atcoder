#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int res = N / 2;
  if (N % 2 == 1)
  {
    cout << res + 1 << endl;
  }
  else
  {
    cout << res << endl;
  }

  return 0;
}
