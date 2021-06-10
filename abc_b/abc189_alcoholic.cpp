#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<pair<int, int>> v(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].first >> v[i].second;
  }

  int cup = -1;
  int sum = 0;
  for (int i = 0; i < N; ++i)
  {
    sum += v[i].first * v[i].second;
    if (sum > X * 100)
    {
      cup = i + 1;
      break;
    }
  }

  cout << cup << endl;

  return 0;
}
