#include <iostream>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  bool ans[3] = {true, true, true};
  ans[A - 1] = false;
  ans[B - 1] = false;

  for (int i = 0; i < 3; ++i)
  {
    if (ans[i])
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
