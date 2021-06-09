#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
  string S;
  cin >> S;

  bool is_difficult = true;
  for (int i = 0; i < S.size(); ++i)
  {
    char c = S[i];
    if (i % 2)
    {
      // 偶数番目
      if (!isupper(c))
      {
        is_difficult = false;
        break;
      }
    }
    else
    {
      // 奇数番目
      if (!islower(c))
      {
        is_difficult = false;
        break;
      }
    }
  }

  if (is_difficult)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
