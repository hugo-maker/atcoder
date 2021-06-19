#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  bool ok = false;
  while (N)
  {
    if (N % 10 == 7)
    {
      ok = true;
      break;
    }
    N /= 10;
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
