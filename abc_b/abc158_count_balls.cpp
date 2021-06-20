#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  long long N, A, B;
  cin >> N >> A >> B;

  long long set = A + B;
  long long blue = (N / set) * A + min(A, N % set);

  cout << blue << endl;

  return 0;
}
