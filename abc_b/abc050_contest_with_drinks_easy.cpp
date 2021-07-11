#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N;

  vector<int> T(N);
  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> T[i];
    sum += T[i];
  }

  cin >> M;
  vector<int> P(M), X(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> P[i] >> X[i];
  }

  for (int i = 0; i < M; ++i)
  {
    cout << sum - T[P[i] - 1] + X[i] << endl;
  }

  return 0;
}
