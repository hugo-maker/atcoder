#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> v(N + 1, 0);
  int A;
  for (int i = 0; i < Q; ++i)
  {
    cin >> A;
    ++v[A];
  }

  for (int i = 1; i <= N; ++i)
  {
    if (K - (Q - v[i]) >= 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
