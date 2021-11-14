#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> S(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }

  int cnt = 0;
  for (int i = 0; i < N; ++i)
  {
    bool ok = false;
    for (int a = 1; a <= 250; ++a)
    {
      for (int b = 1; b <= 250; ++b)
      {
        int space = 4 * a * b + 3 * a + 3 * b;
        if (space == S[i])
        {
          ok = true;
          break;
        }
        else if (space > S[i])
        {
          break;
        }
      }
    }
    if (!ok)
    {
      ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}
