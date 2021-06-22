#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;

  string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for (size_t i = 0; i < S.size(); ++i)
  {
    for (size_t j = 0; j < alphabet.size(); ++j)
    {
      if (S[i] == alphabet[j])
      {
        char c = 'A';
        c += (j + N) % 26;
        cout << c;
        break;
      }
    }
  }
  cout << endl;

  return 0;
}
