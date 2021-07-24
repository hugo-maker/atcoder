#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int temp;
  vector<int> a(100001, 0);
  int res = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    if (temp > 100000)
    {
      ++res;
    }
    else
    {
      ++a[temp];
    }
  }

  for (int i = 1; i <= 100000; ++i)
  {
    if (a[i] > i)
    {
      res += a[i] - i;
    }
    else if (a[i] < i)
    {
      res += a[i];
    }
  }

  cout << res << endl;
  return 0;
}
