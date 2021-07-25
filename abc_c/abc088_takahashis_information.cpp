#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> c(4, vector<int>(4, 0));
  for (int i = 1; i <= 3; ++i)
  {
    for (int j = 1; j <= 3; ++j)
    {
      cin >> c[i][j];
    }
  }

  bool ok = true;
  vector<int> a(4, 0);
  vector<int> b(4, 0);
  for (int a1 = 0; a1 <= c[1][1]; ++a1)
  {
    a[1] = a1;

    b[1] = c[1][1] - a[1];
    b[2] = c[1][2] - a[1];
    b[3] = c[1][3] - a[1];

    a[2] = c[2][1] - b[1];
    a[3] = c[3][1] - b[1];

    for (int i = 1; i <= 3; ++i)
    {
      for (int j = 1; j <= 3; ++j)
      {
        if (a[i] + b[j] != c[i][j])
        {
          ok = false;
          break;
        }
      }
    }
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
