#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int abc = abs(b - a) + abs(c - b);
  int acb = abs(c - a) + abs(b - c);
  int bac = abs(a - b) + abs(c - a);

  cout << min({abc, acb, bac}) << endl;
  return 0;
}
