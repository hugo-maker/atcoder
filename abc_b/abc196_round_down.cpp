#include <iostream>
#include <string>
using namespace std;

int main()
{
  string X;
  cin >> X;

  auto pos = X.find(".");
  if (pos != std::string::npos)
  {
    X.erase(pos, X.size() - pos);
  }

  cout << X << endl;

  return 0;
}
