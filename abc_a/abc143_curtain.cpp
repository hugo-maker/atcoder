#include <iostream>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  if (2 * B < A)
  {
    cout << A - 2 * B << endl;
  }
  else
  {
    cout << 0 << endl;
  }

  return 0;
}
