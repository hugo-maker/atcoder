#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> L(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    cin >> L[i];
  }

  vector<int> D(N + 2);
  D[0] = 0;
  D[1] = 0;
  for (int i = 2; i <= N + 1; ++i)
  {
    D[i] = D[i - 1] + L[i - 1];
  }

  auto iter = upper_bound(D.begin(), D.end(), X);
  cout << (--iter) - D.begin() << endl;

  return 0;
}
