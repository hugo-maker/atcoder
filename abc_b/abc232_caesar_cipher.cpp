#include <iostream>
#include <string>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;

  for (int k = 0; k <= 25; ++k)
  {
    string S2 = S;
    for (int i = 0; i < (int)S.size(); ++i)
    {
      S2[i] = ((S2[i] - 'a') + k) % 26 + 'a';
    }
    if (S2 == T)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
