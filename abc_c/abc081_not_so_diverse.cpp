#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> A(200001, 0);
  int temp;
  int cnt = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> temp;
    ++A[temp];
    if (A[temp] == 1)
    {
      ++cnt;
    }
  }

  sort(A.begin(), A.end());
  int res = 0;
  cnt -= K;
  for (int i = 0; i < 200001; ++i)
  {
    if (A[i])
    {
      res += A[i];
      --cnt;
    }
    if (cnt <= 0)
    {
      break;
    }
  }

  cout << res << endl;
  return 0;
}
