#include <iostream>
using namespace std;

int main()
{
  unsigned long long int X;
  cin >> X;

  int i = 1;
  unsigned long long int capital = 100;
  for (i = 1; ; ++i)
  {
    capital += capital / 100;
    if (capital >= X)
    {
      break;
    }
  }

  cout << i << endl;

  return 0;
}
