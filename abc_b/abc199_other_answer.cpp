#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1);
  vector<int> B(N + 1);
  for (int i = 1; i <= N; ++i)
  {
    cin >> A[i];
  }
  for (int i = 1; i <= N; ++i)
  {
    cin >> B[i];
  }

  int count = 0;
  for (int x = 1; x <= 1000; ++x)
  {
    bool ok = true;
    for (int i = 1; i <= N; ++i)
    {
      if (x < A[i] || x > B[i])
      {
        ok = false;
      }
    }
    if (ok)
    {
      ++count;
    }
  }

  cout << count << endl;

  return 0;
}
