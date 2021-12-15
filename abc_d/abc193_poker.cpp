#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

long long score(const string & S)
{
  vector<long long> val(10);
  for (int v = 1; v <= 9; ++v)
  {
    val[v] = v;
  }
  for (auto c : S)
  {
    val[c - '0'] *= 10;
  }
  long long sum = 0;
  for (int v = 1; v <= 9; ++v)
  {
    sum += val[v];
  }
  return sum;
}

int main()
{
  long long K;
  string S, T;
  cin >> K >> S >> T;

  vector<long long> rem(10, K);
  for (int i = 0; i < 4; ++i)
  {
    rem[S[i] - '0']--;
    rem[T[i] - '0']--;
  }

  double res = 0.0;
  for (int a = 1; a <= 9; ++a)
  {
    for (int b = 1; b <= 9; ++b)
    {
      S[4] = (char)('0' + a), T[4] = (char)('0' + b);

      if (score(S) > score(T))
      {
        if (a != b)
        {
          res += rem[a] * rem[b];
        }
        else
        {
          res += rem[a] * (rem[a] - 1);
        }
      }
    }
  }

  res /= (K * 9 - 8) * (K * 9 - 9);
  cout << fixed << setprecision(10) << res << endl;
  return 0;
}
