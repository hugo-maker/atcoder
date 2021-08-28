#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string S;
  cin >> S;
  vector<int> v(10, 0);
  for (int i = 0; i < 10; ++i)
  {
    if (S[i] == 'o')
    {
      ++v[i];
    }
    else if (S[i] == 'x')
    {
      --v[i];
    }
  }

  int ans = 0;
  for (int a = 0; a < 10; ++a)
  {
    for (int b = 0; b < 10; ++b)
    {
      for (int c = 0; c < 10; ++c)
      {
        for (int d = 0; d < 10; ++d)
        {
          vector<int> w(10, 0);
          ++w[a];
          ++w[b];
          ++w[c];
          ++w[d];

          bool ok = true;
          for (int j = 0; j < 10; ++j)
          {
            if (v[j] == 1)
            {
              if (w[j] < 1)
              {
                ok = false;
              }
            }
            else if (v[j] == -1)
            {
              if (w[j] >= 1)
              {
                ok = false;
              }
            }
          }

          if (ok)
          {
            ++ans;
          }
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
