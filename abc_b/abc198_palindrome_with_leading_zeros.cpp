#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string N;
  cin >> N;

  while (*(N.end() - 1) == '0')
  {
    if (N.size() > 1)
    {
      N.pop_back();
    }
    else
    {
      break;
    }
  }

  string reverse_N = N;
  reverse(reverse_N.begin(), reverse_N.end());

  if (N == reverse_N)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

 return 0;

