#include <iostream>
using namespace std;

int main()
{
  int X, t;
  cin >> X >> t;
  
  if (t >= X)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << X - t << endl;
  }

  return 0;
}
