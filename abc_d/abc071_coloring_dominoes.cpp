#include <iostream>
#include <vector>
#include <string>
using namespace std;
const long long int MOD = 1e9 + 7;

int main()
{
  int N;
  string S1, S2;
  cin >> N >> S1 >> S2;

  int i = 0;
  long long ans = 0;
  int flag = 0;
  if (S1[i] == S2[i])
  {
    ans = 3;
    ++i;
    flag = 1;
  }
  else
  {
    ans = 6;
    i += 2;
    flag = 2;
  }

  while (i < N)
  {
    // 縦に1つ置き
    if (S1[i] == S2[i])
    {
      // 直前の並びが縦に1つ置きなら、残りの2色から選べる
      // 直前の並びが横に2つ重ね置きなら、残りの1色からしか選べない
      if (flag == 1)
      {
        ans *= 2;
        ans %= MOD;
      }

      ++i;
      flag = 1;
    }
    // 横に２つ重ね置き
    else
    {
      if (flag == 1)
      {
        ans *= 2;
        ans %= MOD;
      }
      else
      {
        ans *= 3;
        ans %= MOD;
      }
      i += 2;
      flag = 2;
    }
  }

  cout << ans << endl;
  return 0;
}
