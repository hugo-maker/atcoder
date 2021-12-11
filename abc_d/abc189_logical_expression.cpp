#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> S[i];
  }
  vector<vector<long long>> d(N + 1, vector<long long>(2));
  d[0][0] = 1;
  d[0][1] = 1;
  for (int i = 0; i < N; ++i)
  {
    if (S[i] == "AND")
    {
      d[i + 1][0] = 2 * d[i][0] + d[i][1];
      d[i + 1][1] = d[i][1];
    }
    else
    {
      d[i + 1][0] = d[i][0];
      d[i + 1][1] = d[i][0] + 2 * d[i][1];
    }
  }
  cout << d[N][1] << endl;
  return 0;
}
