#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S;
  cin >> S;

  long long res = 0;
  int N = S.size() - 1;
  for (int bit = 0; bit < (1 << N); ++bit)
  {
    long long temp = 0;
    for (int i = 0; i < N; ++i)
    {
      temp *= 10;
      temp += S[i] - '0';
      if (bit & (1 << i))
      {
        res += temp;
        temp = 0;
      }
    }
    temp *= 10;
    temp += S.back() - '0';
    res += temp;
  }
  cout << res << endl;

  return 0;
}
