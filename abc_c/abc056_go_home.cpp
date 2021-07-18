#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long X;
  cin >> X;

  vector<long long> v(50001);
  v[0] = 0;
  for (int i = 1; i <= 50000; ++i)
  {
    v[i] = v[i - 1] + i;
    if (v[i] >= X)
    {
      cout << i << endl;
      return 0;
    }
  }
}
