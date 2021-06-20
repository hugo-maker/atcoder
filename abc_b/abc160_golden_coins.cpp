#include <iostream>
using namespace std;

int main()
{
  int X;
  cin >> X;

  long long happy = 0;
  happy += X / 500 * 1000;
  X %= 500;
  happy += X / 5 * 5;

  cout << happy << endl;

  return 0;
}
