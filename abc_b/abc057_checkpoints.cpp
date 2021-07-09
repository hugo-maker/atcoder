#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(M);
  vector<int> d(M);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < M; ++i)
  {
    cin >> c[i] >> d[i];
  }

  for (int i = 0; i < N; ++i)
  {
    int min_num = 51;
    int min_distance = 1 << 29;
    for (int j = 0; j < M; ++j)
    {
      int tmp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if (tmp < min_distance)
      {
        min_distance = tmp;
        min_num = j + 1;
      }
    }
    cout << min_num << endl;
  }

  return 0;
}
