#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string N;
  cin >> N;
  int len = (int)N.size();
  sort(N.begin(), N.end(), greater<char>{});
  string a = "";
  string b = "";
  for (int i = 0; i < len; ++i)
  {
    if (i % 2 == 0)
    {
      a += N[i];
    }
    else
    {
      b += N[i];
    }
  }

  for (int i = 0; i < (int)(min(a.size(), b.size())); ++i)
  {
    if (a[i] != b[i])
    {
      auto temp = a[i];
      a[i] = b[i];
      b[i] = temp;
      break;
    }
  }

  int A = stoi(a);
  int B = stoi(b);
  cout << A * B << endl;
  return 0;
}
