#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int a = 0, b = 0;
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == 'R')
    {
      ++a;
    }
  }
  int ans = max(a, b);
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == 'R')
    {
      --a;
    }
    else
    {
      ++b;
    }
    int now = max(a, b);
    ans = min(ans, now);
  }

  cout << ans << endl;
  return 0;
}
