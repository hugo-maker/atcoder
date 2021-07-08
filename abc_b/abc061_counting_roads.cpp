#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> v(N + 1, 0);

  int a, b;
  for (int i = 0; i < M; ++i)
  {
    cin >> a >> b;
    ++v[a];
    ++v[b];
  }

  for (int i = 1; i <= N; ++i)
  {
    cout << v[i] << endl;
  }

  return 0;
}
