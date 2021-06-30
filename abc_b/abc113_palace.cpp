#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N, T, A;
  cin >> N >> T >> A;
  vector<pair<double, int>> v(N);
  int H;
  for (int i = 0; i < N; ++i)
  {
    cin >> H;
    v[i].first = abs((T - H * 0.006) - A);
    v[i].second = i + 1;
  }
  sort(v.begin(), v.end());

  cout << v[0].second << endl;

  return 0;
}
