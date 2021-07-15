#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, x;
  cin >> N >> x;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  long long cnt = 0;
  for (int i = 1; i < N; ++i)
  {
    long long temp = 0;
    if (a[i - 1] + a[i] > x)
    {
      temp = a[i - 1] + a[i] - x;
      if (temp >= a[i])
      {
        a[i] = 0;
      }
      else
      {
        a[i] -= temp;
      }
      cnt += temp;
    }
  }

  cout << cnt << endl;
  return 0;
}
