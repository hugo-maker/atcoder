#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  vector<int> x(N);
  vector<int> y(M);
  for (int i = 0; i < N; ++i)
  {
    cin >> x[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> y[i];
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  for (int i = X + 1; i <= Y; ++i)
  {
    if (i > x[N - 1] && i <= y[0])
    {
      cout << "No War" << endl;
      return 0;
    }
  }

  cout << "War" << endl;
  return 0;
}
