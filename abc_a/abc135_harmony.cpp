#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long long A, B;
  cin >> A >> B;

  if ((A - B) % 2 == 0)
  {
    cout << (A + B) / 2 << endl;
  }
  else
  {
    cout << "IMPOSSIBLE" << endl;
  }

  return 0;
}
