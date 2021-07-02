#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  vector<int> h(1000);
  h[1] = 1;
  for (int i = 2; i <= 999; ++i)
  {
    h[i] = h[i - 1] + i;
  }

  cout << h[b - a] - b << endl;
  return 0;
}
