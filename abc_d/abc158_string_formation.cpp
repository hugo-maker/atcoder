#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  int Q;
  cin >> S >> Q;
  bool is_reverse = false;
  
  for (int q = 0; q < Q; ++q)
  {
    int query;
    cin >> query;

    if (query == 1)
    {
      if (is_reverse)
      {
        is_reverse = false;
      }
      else
      {
        is_reverse = true;
      }
    }
    else
    {
      int f;
      string c;
      cin >> f >> c;
      if (is_reverse)
      {
        if (f == 1)
        {
          f = 2;
        }
        else
        {
          f = 1;
        }
      }

      if (f == 1)
      {
        S = c + S;
      }
      else
      {
        S += c;
      }
    }
  }

  if (is_reverse)
  {
    reverse(S.begin(), S.end());
  }

  cout << S << endl;
  return 0;
}
