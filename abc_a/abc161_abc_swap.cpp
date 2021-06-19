#include <iostream>
using namespace std;

int main()
{
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int temp = X;
  X = Y;
  Y = temp;

  temp = X;
  X = Z;
  Z = temp;

  cout << X << " " << Y << " " << Z << endl;

  return 0;
}
