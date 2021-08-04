#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> h(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> h[i];
  }

  int ans = 0;
  while (true)
  {
    if (*max_element(h.begin(), h.end()) == 0)
    {
      break;
    }

    int i = 0;
    while (i < N)
    {
      if (h[i] == 0)
      {
        ++i;
      }
      else
      {
        ++ans;
        while (i < N && h[i] > 0)
        {
          --h[i];
          ++i;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
