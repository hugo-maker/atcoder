#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  long long K;
  cin >> S >> K;

  int ans = 0;

  int cnt = 0;
  int i = 0;
  for (i = 0; i < (int)S.size(); ++i)
  {
    if (S[i] == '1')
    {
      ++cnt;
    }
    else
    {
      break;
    }
  }
  if (cnt >= K)
  {
    ans = 1;
  }
  else
  {
    ans = S[i] - '0';
  }

  cout << ans << endl;
  return 0;
}
