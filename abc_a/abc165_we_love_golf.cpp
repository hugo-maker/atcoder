#include <iostream>
using namespace std;

int main()
{
  int K, A, B;
  cin >> K >> A >> B;

  bool can = false;
  for (int i = A; i <= B; ++i)
  {
    if (i % K == 0)
    {
      can = true;
      break;
    }
  }

  if (can)
  {
    cout << "OK" << endl;
  }
  else
  {
    cout << "NG" << endl;
  }

  return 0;
}
