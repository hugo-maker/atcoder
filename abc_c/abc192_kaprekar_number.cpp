#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int g1(int x)
{
  string s1 = to_string(x);
  sort(s1.begin(), s1.end(), greater<char>{});
  int res = stoi(s1);
  return res;
}

int g2(int x)
{
  string s2 = to_string(x);
  sort(s2.begin(), s2.end());
  int res = stoi(s2);
  return res;
}

int f(int x)
{
  return g1(x) - g2(x);
}

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> a(K + 1);
  a[0] = N;
  for (int i = 1; i <= K; ++i)
  {
    a[i] = f(a[i - 1]);
  }

  cout << a[K] << endl;
  return 0;
}
