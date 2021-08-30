#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  long long K;
  cin >> N >> K;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }
  vector<long long> ans(N, K / N);
  K %= N;

  vector<int> p(N);
  for (int i = 0; i < N; ++i)
  {
    p[i] = i;
  }

  sort(p.begin(), p.end(), [&](int i, int j) {return a[i] < a[j];});
  for (int i = 0; i < K; ++i)
  {
    ++ans[p[i]];
  }

  for (int i = 0; i < N; ++i)
  {
    cout << ans[i] << endl;
  }
  return 0;
}
