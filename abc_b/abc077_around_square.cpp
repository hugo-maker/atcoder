#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long double N;
  cin >> N;
  for (long double i = N; i >= 1; --i)
  {
    if (ceil(sqrt(i)) == sqrt(i))
    {
      cout << (long long)i << endl;
      return 0;
    }
  }
}
