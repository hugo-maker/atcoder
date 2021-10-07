#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }
  vector<pair<long long, long long>> CB;
  for (int i = 0; i < M; ++i)
  {
    long long B, C;
    cin >> B >> C;
    CB.push_back({C, B});
  }

  sort(A.begin(), A.end());
  sort(CB.begin(), CB.end(), greater<pair<long long, long long>>{});

  int i = 0;
  int iter = 0;
  while (i < N && iter < M)
  {
    int j = i;
    for (j = i; j < i + CB[iter].second && j < N; ++j)
    {
      if (A[j] < CB[iter].first)
      {
        A[j] = CB[iter].first;
      }
    }
    i = j;
    ++iter;
  }

  long long ans = 0;
  for (int i = 0; i < N; ++i)
  {
    ans += A[i];
  }

  cout << ans << endl;
  return 0;
}
