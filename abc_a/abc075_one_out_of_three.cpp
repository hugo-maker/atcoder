#include <iostream>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  if (A != B && B == C)
  {
    cout << A << endl;
  }
  else if (A != B && A == C)
  {
    cout << B << endl;
  }
  else if (A != C && A == B)
  {
    cout << C << endl;
  }

  return 0;
}
