#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> P(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    P[i] = i + 1;
  }
  sort(A.begin(), A.end());
  if (A == P)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
