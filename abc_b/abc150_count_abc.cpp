#include <iostream>
#include <string>
using namespace std;

int main()
{
  int N;
  string S;

  cin >> N >> S;

  string find_word("ABC");
  int count = 0;

  auto pos = S.find(find_word);
  while (pos != std::string::npos)
  {
    ++count;
    pos = S.find(find_word, pos + find_word.length());
  }

  cout << count << endl;

  return 0;
}
