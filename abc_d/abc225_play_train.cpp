#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long n, q;
  cin >> n >> q;
  long long nil = -1;
  vector<long long> front(n + 1, nil);
  vector<long long> back(n + 1, nil);

  while (q--)
  {
    long long c;
    cin >> c;
    if (c == 1)
    {
      long long x, y;
      cin >> x >> y;
      back[x] = y;
      front[y] = x;
    }
    else if (c == 2)
    {
      long long x, y;
      cin >> x >> y;
      back[x] = nil;
      front[y] = nil;
    }
    else
    {
      long long x;
      cin >> x;
      while (front[x] != nil)
      {
        x = front[x];
      }
      vector<long long> ans;
      while (x != nil)
      {
        ans.push_back(x);
        x = back[x];
      }
      cout << ans.size() << " ";
      for (long long i = 0; i <= (int)ans.size() - 1; ++i)
      {
        cout << ans[i];
        if (i != (int)ans.size() - 1)
        {
          cout << " ";
        }
        else
        {
          cout << endl;
        }
      }
    }
  }

  return 0;
}
