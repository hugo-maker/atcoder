#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string A, B;
  cin >> A >> B;
  int cnt = min(A.size(), B.size());
  reverse(A.begin(), A.end());
  reverse(B.begin(), B.end());
  for (int i = 0; i < cnt; ++i)
  {
    int a = A[i] - '0';
    int b = B[i] - '0';
    if (a + b >= 10)
    {
      cout << "Hard" << endl;
      return 0;
    }
  }
  cout << "Easy" << endl;
  return 0;
}
