#include <iostream>
#include <vector>
#include <algorithm>
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

  auto result = remove_if(A.begin(), A.end(),
      [=] (int x) {return x == X; });

  A.erase(result, A.end());

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
