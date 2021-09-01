#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> S(N);
  vector<int> T(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> T[i];
  }

  for (int i = 0; i < N * 2; ++i)
  {
    T[(i + 1) % N] = min(T[(i + 1) % N], T[i % N] + S[i % N]);
  }

  for (int i = 0; i < N; ++i)
  {
    cout << T[i] << endl;
  }
  return 0;
}
