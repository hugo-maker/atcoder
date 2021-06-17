#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<unsigned long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  int zero = 0;
  for (int i = 0; i < N; ++i)
  {
    if (A[i] == 0)
    {
      ++zero;
    }
  }
  if (zero > 0)
  {
    cout << 0 << endl;
    return 0;
  }

  unsigned long long prod = 1;
  for (int i = 0; i < N; ++i)
  {
    if (A[i] <= 1000000000000000000 / prod)
    {
      prod *= A[i];
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << prod << endl;
  return 0;
}
