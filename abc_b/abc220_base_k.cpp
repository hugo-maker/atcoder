#include <iostream>
#include <cmath>
using namespace std;

long long solve(string s, long long k)
{
  long long res = 0;
  long long weight = 0;
  for (int i = (int)s.size() - 1; i >= 0; --i)
  {
    long long num = s[i] - '0';
    res += pow(k, weight) * num;
    ++weight;
  }
  return res;
}

int main()
{
  long long K;
  string A, B;
  cin >> K >> A >> B;
  cout << solve(A, K) * solve(B, K) << endl;
  return 0;
}
