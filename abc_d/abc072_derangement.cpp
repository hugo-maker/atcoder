#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> p[i];
  }

  int cnt = 0;
  for (int i = 0; i < N - 1; ++i)
  {
    if (p[i] == i + 1)
    {
      ++cnt;
      swap(p[i], p[i + 1]);
    }
  }
  if (p[N - 1] == N)
  {
    ++cnt;
  }

  cout << cnt << endl;
  return 0;
}
