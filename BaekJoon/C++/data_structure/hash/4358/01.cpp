#include <iostream>
#include <map>

using namespace std;

int cnt;
string s;
map<string, double> m;

int main(void)
{
  while (getline(cin, s))
  {
    cnt++;
    m[s]++;
  }

  cout << fixed;
  cout.precision(4);

  for (auto &i : m)
  {
    double value = i.second;
    value /= cnt;
    value *= 100.0;
    cout << i.first << " " << value << "\n";
  }
  return 0;
}