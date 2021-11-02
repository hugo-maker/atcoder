#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int N, K; 
  long long R, S, P;
  cin >> N >> K >> R >> S >> P;
  string T;
  cin >> T;

  auto score = [&] (int i) {
  if (T[i] == 'r') return P;
  else if (T[i] == 's') return R;
  else return S;
  };

  long long ans = 0;
  for (int k = 0; k < K; ++k)
  {
    bool last = false;
    for (int i = k; i < N; i += K)
    {
      if (i >= K && T[i - K] == T[i] && last)
      {
        last = false;
      }
      else
      {
        ans += score(i);
        last = true;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
