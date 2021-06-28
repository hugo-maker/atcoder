#include <iostream>
#include <vector>
using namespace std;

int get_the_units_digit(int n)
{
  return n % 10;
}

int main()
{
  vector<int> v(5);
  for (int i = 0; i < 5; ++i)
  {
    cin >> v[i];
  }

  int min_digit = 9;
  int min_index = 0;
  vector<int> d(5);
  for (int i = 0; i < 5; ++i)
  {
    d[i] = get_the_units_digit(v[i]);
    if (d[i] != 0 && d[i] <= min_digit)
    {
      min_digit = d[i];
      min_index = i;
    }
  }

  int res = 0;
  for (int i = 0; i < 5; ++i)
  {
    res += v[i];
    if (i != min_index && d[i] != 0)
    {
      res += (10 - d[i]);
    }
  }

  cout << res << endl;
  return 0;
}
