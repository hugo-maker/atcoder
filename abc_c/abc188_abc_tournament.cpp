#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  long long num = pow(2, N - 1);
  vector<int> A(num);
  vector<int> B(num);
  for (int i = 0; i < num; ++i)
  {
    cin >> A[i];
  }
  for (int i = 0; i < num; ++i)
  {
    cin >> B[i];
  }

  auto iter_a = max_element(A.begin(), A.end());
  int index_a = iter_a - A.begin();
  auto iter_b = max_element(B.begin(), B.end());
  int index_b = iter_b - B.begin();

  if (*iter_a > *iter_b)
  {
    cout << num + index_b + 1 << endl;
  }
  else
  {
    cout << index_a + 1 << endl;
  }

  return 0;
}
