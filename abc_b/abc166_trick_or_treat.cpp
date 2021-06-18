#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  int d;
  int temp;
  vector<bool> A(N, false);
  for (int i = 0; i < K; ++i)
  {
    cin >> d;
    for (int j = 0; j < d; ++j)
    {
      int temp;
      cin >> temp;
      A[temp - 1] = true;
    }
  }

  int count = 0;
  for (int i = 0; i < N; ++i)
  {
    if (!A[i])
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
