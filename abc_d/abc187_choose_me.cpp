#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N), B(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i] >> B[i];
  }

  vector<int> ids(N);
  for (int i = 0; i < N; ++i)
  {
    ids[i] = i;
  }
  sort(ids.begin(), ids.end(), [&](int i, int j) 
      {return A[i] * 2 + B[i] > A[j] * 2 + B[j];});

  long long diff = 0;
  for (int i = 0; i < N; ++i)
  {
    diff += A[i];
  }
  int ans = 0;
  for (auto i : ids)
  {
    ++ans;
    diff -= A[i] * 2 + B[i];
    if (diff < 0)
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
