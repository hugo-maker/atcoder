#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int century = N / 100;
  if (N % 100)
  {
    ++century;
  }

  cout << century << endl;

  return 0;
}
