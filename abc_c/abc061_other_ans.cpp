#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long N, K;
  cin >> N >> K;
  vector<long long> v(100001, 0);
  int a, b;
  for (int i = 0; i < N; ++i)
  {
    cin >> a >> b;
    v[a] += b;
  }

  long long cnt = 0;
  for (int i = 1; i < v.size(); ++i)
  {
    cnt += v[i];
    if (cnt >= K)
    {
      cout << i << endl;
      return 0;
    }
  }
}
