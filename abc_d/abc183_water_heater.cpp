#include <iostream>
#include <vector>
using namespace std;

const int MAX = 200005;

int main()
{
  int N, W;
  cin >> N >> W;
  vector<long long> v(MAX);
  for (int i = 0; i < N; ++i)
  {
    int s, t, p;
    cin >> s >> t >> p;
    v[s] += p;
    v[t] -= p;
  }
  for (int i = 0; i < MAX; ++i)
  {
    v[i + 1] += v[i];
  }
  for (int i = 0; i < MAX; ++i)
  {
    if (v[i] > W)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
