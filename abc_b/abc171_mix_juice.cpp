#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> p(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  int sum = 0;
  for (int i = 0; i < K; ++i)
  {
    sum += p[i];
  }

  cout << sum << endl;

  return 0;
}
