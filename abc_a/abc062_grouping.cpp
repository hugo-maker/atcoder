#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  bool x_a = false;
  bool x_b = false;
  bool x_c = false;
  bool y_a = false;
  bool y_b = false;
  bool y_c = false;
  if (x == 2)
  {
    x_c = true;
  }
  else if (x == 4 || x == 6 || x == 9 || x == 11)
  {
    x_b = true;
  }
  else
  {
    x_a = true;
  }
  if (y == 2)
  {
    y_c = true;
  }
  else if (y == 4 || y == 6 || y == 9 || y == 11)
  {
    y_b = true;
  }
  else
  {
    y_a = true;
  }

  if (x_a && y_a || x_b && y_b || x_c && y_c)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
