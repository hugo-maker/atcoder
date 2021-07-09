#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  char a = s1[0];
  char b = s2[0];
  char c = s3[0];
  cout << static_cast<char>(toupper(s1[0]))
       << static_cast<char>(toupper(s2[0]))
       << static_cast<char>(toupper(s3[0])) << endl;
  return 0;
}
