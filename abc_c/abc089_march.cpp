#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<unsigned long long int> v(5, 0);
  string s;
  for (int i = 0; i < N; ++i)
  {
    cin >> s;
    if (s[0] == 'M')
    {
      ++v[0];
    }
    else if (s[0] == 'A')
    {
      ++v[1];
    }
    else if (s[0] == 'R')
    {
      ++v[2];
    }
    else if (s[0] == 'C')
    {
      ++v[3];
    }
    else if (s[0] == 'H')
    {
      ++v[4];
    }
  }

  unsigned long long int res = 0;
  for (int i = 0; i < 5; ++i)
  {
    for (int j = i + 1; j < 5; ++j)
    {
      for (int k = j + 1; k < 5; ++k)
      {
        res += v[i] * v[j] * v[k];
      }
    }
  }

  cout << res << endl;
  return 0;
}
