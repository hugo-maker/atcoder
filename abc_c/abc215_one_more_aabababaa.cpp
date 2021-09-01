#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string S;
  int K;
  cin >> S >> K;

  int cnt = 1;
  sort(S.begin(), S.end());
  do
  {
    if (cnt == K)
    {
      cout << S << endl;
    }
    ++cnt;
  } while (next_permutation(S.begin(), S.end()));

  return 0;
}
