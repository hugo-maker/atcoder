#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> v(N + 1, 0);
  for (int i = 0; i < N - 1; ++i)
  {
    int a, b;
    cin >> a >> b;
    ++v[a];
    ++v[b];
  }

  for (int i = 1; i <= N; ++i)
  {
    if (v[i] == N - 1)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
