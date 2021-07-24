#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> C(N - 1);
  vector<int> S(N - 1);
  vector<int> F(N - 1);
  for (int i = 0; i < N - 1; ++i)
  {
    cin >> C[i] >> S[i] >> F[i];
  }

  for (int i = 0; i < N - 1; ++i)
  {
    int t = 0;
    for (int j = i; j < N - 1; ++j)
    {
      if (t < S[j])
      {
        t = S[j];
      }
      else if (t % F[j] == 0)
      {
      }
      else
      {
        t = t + F[j] - t % F[j];
      }
      t += C[j];
    }
    cout << t << endl;
  }

  cout << 0 << endl;
  return 0;
}
