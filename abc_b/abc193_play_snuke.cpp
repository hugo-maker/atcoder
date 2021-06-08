#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const long long INF = 1e15;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  vector<long long> P(N);
  vector<long long> X(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> P[i] >> X[i];
  }

  long long result = INF;
  for (int i = 0; i < N; ++i)
  {
    if (X[i] - A[i] > 0)
    {
      result = min(result, P[i]);
    }
  }

  if (result == INF)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << result << endl;
  }

  return 0;
}
