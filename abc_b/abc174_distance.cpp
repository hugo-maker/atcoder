#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;
  vector<double> d(N);
  vector<pair<double, double>> v(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> v[i].first >> v[i].second;
  }

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    double d = sqrt(v[i].first * v[i].first + v[i].second * v[i].second);
    if (d <= D)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
