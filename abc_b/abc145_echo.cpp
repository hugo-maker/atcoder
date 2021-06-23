#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;

  if (N % 2)
  {
    cout << "No" << endl;
    return 0;
  }

  string T = S.substr(S.size() / 2);
  S.erase(S.size() / 2, S.size() / 2);

  if (S == T)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
