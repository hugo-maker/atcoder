#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

vector<int> x(10), y(10);

double distance(int i, int j)
{
  double dx = x[i] - x[j];
  double dy = y[i] - y[j];

  return pow(dx * dx + dy * dy, 0.5);
}

int main()
{
  int N;
  cin >> N;

  for (int i = 1; i <= N; ++i)
  {
    cin >> x[i] >> y[i];
  }

  vector<int> v(N);
  for (int i = 0; i < N; ++i)
  {
    v[i] = i + 1;
  }

  int count = 1;
  for (int i = 1; i <= N; ++i)
  {
    count *= i;
  }

  double sum = 0.0;
  do
  {
    for (int i = 0; i < N - 1; ++i)
    {
      sum += distance(v[i], v[i + 1]);
    }
  } while (next_permutation(v.begin(), v.end()));

  cout << setprecision(10) << sum / count << endl;

  return 0;
}
