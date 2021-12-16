#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N;
  cin >> N;
  double e = 0;
  for (int i = 2; i <= N; ++i)
  {
    e += (double) N / (N - i + 1);
  }
  cout << setprecision(10) << e << endl;
  return 0;
}
