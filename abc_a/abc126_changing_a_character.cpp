#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N, K;
  string S;
  cin >> N >> K >> S;

  S[K - 1] = tolower(S[K - 1]);
  cout << S << endl;

  return 0;
}
