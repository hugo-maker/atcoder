#include <iostream>
using namespace std;

int main()
{
  int H, A;
  cin >> H >> A;

  for (int i = 1; ; ++i)
  {
    H -= A;
    if (H <= 0)
    {
      cout << i << endl;
      return 0;
    }
  }
}
