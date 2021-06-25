#include <iostream>
using namespace std;

int main()
{
  int K, X;
  cin >> K >> X;

  for (int i = K - 1; i >= 1; --i)
  {
    if (i < K - 1)
    {
      cout << " ";
    }
    cout << X - i;
  }

  for (int i = 0; i <= K - 1; ++i)
  {
    cout << " " << X + i;
  }
  cout << endl;

  return 0;
}
