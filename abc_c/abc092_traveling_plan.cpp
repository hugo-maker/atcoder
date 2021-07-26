#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<long long> A(N + 2, 0);
  
  for (int i = 1; i <= N; ++i)
  {
    cin >> A[i];
  }

  long long S = 0;
  for (int i = 0; i <= N; ++i)
  {
    S += abs(A[i] - A[i + 1]);
  }

  for (int i = 1; i <= N; ++i)
  {
    cout << S + abs(A[i - 1] - A[i + 1]) - 
      (abs(A[i - 1] - A[i]) + abs(A[i] - A[i + 1])) << endl;
  }

  return 0;
}
