#include <iostream>
#include <vector>
#include <algorithm>
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

  int alice = 0;
  int bob = 0;
  sort(a.begin(), a.end(), greater<int>{});
  for (int i = 0; i < N; ++i)
  {
    if (i % 2 == 0)
    {
      alice += a[i];
    }
    else
    {
      bob += a[i];
    }
  }

  cout << alice - bob << endl;
  return 0;
}
