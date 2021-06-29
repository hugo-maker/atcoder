#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  for (int i = 0; i < M; ++i)
  {
    cin >> B[i];
  }

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    int sum = 0;
    int A;
    for (int j = 0; j < M; ++j)
    {
      cin >> A;
      sum += A * B[j];
    }
    if (sum + C > 0)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
