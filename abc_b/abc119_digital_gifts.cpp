#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;

  long double sum = 0;
  double x;
  string y;
  for (int i = 0; i < N; ++i)
  {
    cin >> x >> y;
    if (y == "JPY")
    {
      sum += x;
    }
    else
    {
      sum += x * 380000;
    }
  }

  cout << sum << endl;

  return 0;
}
