#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  while (N)
  {
    int digit = N % 10;
    if (digit == 9)
    {
      cout << "Yes" << endl;
      return 0;
    }
    N /= 10;
  }
  cout << "No" << endl;
  return 0;
}
