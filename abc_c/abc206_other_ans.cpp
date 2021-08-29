#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
  long long N;
  cin >> N;
  map<long long, long long> m;
  vector<long long> A(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    ++m[A[i]];
  }

  long long P = 0;
  for (auto iter : m)
  {
    long long num = iter.second;
    P += num * (num - 1) / 2;
  }

  cout << N * (N - 1) / 2 - P << endl;
  return 0;
}
