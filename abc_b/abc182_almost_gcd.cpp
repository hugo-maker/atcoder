#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  int max_count = 0;
  int res = -1;

  for (int k = 2; k <= 1000; ++k)
  {
    int count = 0;
    for (int i = 0; i < N; ++i)
    {
      if (A[i] % k == 0)
      {
        ++count;
      }
    }
    if (count > max_count)
    {
      max_count = count;
      res = k;
    }
  }

  cout << res << endl;

  return 0;
}
