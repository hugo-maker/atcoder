#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int x = c - a;
  int y = d - b;
  cout << c - y << " " << d + x << " " << a - y << " " << b + x << endl;

  return 0;
}
