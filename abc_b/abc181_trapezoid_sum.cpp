#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;
  
  long long A, B;
  long long sum = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> A >> B;
    sum += (A + B) * (B - A + 1) / 2;
  }

  cout << sum << endl;

  return 0;
}
