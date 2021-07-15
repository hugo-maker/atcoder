#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> a(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  long long res = 1LL << 60;
  for (int x = -100; x <= 100; ++x)
  {
    long long temp = 0;
    for (int i = 0; i < N; ++i)
    {
      temp += (x - a[i]) * (x - a[i]);
    }
    res = min(res, temp);
  }

  cout << res << endl;

  return 0;
}
