#include <iostream>
using namespace std;

int main()
{
  int K;
  cin >> K;
  if (K % 2 == 1)
  {
    cout << (K / 2 + 1) * (K / 2) << endl;
  }
  else
  {
    cout << K / 2 * K / 2 << endl;
  }

  return 0;
}
