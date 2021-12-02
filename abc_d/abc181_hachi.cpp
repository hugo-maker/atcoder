#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(string & S)
{
  int N = (int)S.size();
  if (N <= 5)
  {
    sort(S.begin(), S.end());
    do
    {
      int val = 0;
      for (auto c : S)
      {
        val = val * 10 + (int)(c - '0');
      }
      if (val % 8 == 0)
      {
        return true;
      }
    } while (next_permutation(S.begin(), S.end()));
    return false;
  }

  vector<int> v(10, 0);
  for (const auto c : S)
  {
    ++v[c - '0'];
  }

  for (int i = 0; i < 1000; i += 8)
  {
    int tmp = i;
    vector<int> a(10, 0);
    for (int iter = 0; iter < 3; ++iter)
    {
      ++a[tmp % 10];
      tmp /= 10;
    }

    bool ok = true;
    for (int j = 0; j < 10; ++j)
    {
      if (a[j] > v[j])
      {
        ok = false;
        break;
      }
    }
    if (ok)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  string S;
  cin >> S;
  if (solve(S))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
