#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<pair<double, double>> p(N);

  for (int i = 0; i < N; ++i)
  {
    cin >> p[i].first >> p[i].second;
  }

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    for (int j = i + 1; j < N; ++j)
    {
      if (i == j)
      {
        continue;
      }

      double a = (p[j].second - p[i].second) / (p[j].first - p[i].first);
      if (a >= -1 && a <= 1)
      {
        ++count;
      }
    }
  }

  cout << count << endl;

  return 0;
}
