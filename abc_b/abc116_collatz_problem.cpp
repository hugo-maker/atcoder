#include <iostream>
#include <vector>
using namespace std;

int f(int n)
{
  if (n % 2 == 0)
  {
    return n / 2;
  }
  return 3 * n + 1;
}

int main()
{
  int s;
  cin >> s;

  vector<int> a;
  a.push_back(s);

  int count = 0;
  int now;
  int prev = s;
  for (int i = 1; i < 1000000; ++i)
  {
    now = f(prev);
    a.push_back(now);
    prev = now;
    if (a[i] == 1)
    {
      ++count;
      if (count == 2)
      {
        break;
      }
    }
  }

  for (int i = 0; i < a.size(); ++i)
  {
    for (int j = 0; j < a.size(); ++j)
    {
      if (i == j)
      {
        continue;
      }
      if (a[i] == a[j])
      {
        cout << j + 1 << endl;
        return 0;
      }
    }
  }
}
