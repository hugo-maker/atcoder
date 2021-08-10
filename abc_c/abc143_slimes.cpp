#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int cnt = 1;
  for (int i = 1; i < N; ++i)
  {
    if (S[i - 1] != S[i])
    {
      ++cnt;
    }
  }

  cout << cnt << endl;
  return 0;
}
