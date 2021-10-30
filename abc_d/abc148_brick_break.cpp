#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  int ans = 0;
  int num = 1;
  for (int i = 0; i < N; ++i)
  {
    int j = i;
    while (a[j] != num && j < N)
    {
      ++ans;
      ++j;
    }
    i = j;
    ++num;
  }

  if (ans >= N)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }

  return 0;
}
