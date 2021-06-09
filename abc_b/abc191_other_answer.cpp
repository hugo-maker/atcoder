// c++20 の機能を使用(erase_if())
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
  }

  erase_if(A, [=] (int x) {return x == X; });

  for (auto i = 0; i < A.size(); ++i)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << A[i];
  }
  cout << endl;

  return 0;
}
