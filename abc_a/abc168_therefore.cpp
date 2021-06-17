#include <iostream>
#include <string>
using namespace std;

int main()
{
  string N;
  cin >> N;


  char c = N[N.size() - 1];
  int res = c - '0';

  if (res == 3)
  {
    cout << "bon" << endl;
  }
  else if (res == 0 || res == 1 || res == 6 || res == 8)
  {
    cout << "pon" << endl;
  }
  else
  {
    cout << "hon" << endl;
  }

  return 0;
}
