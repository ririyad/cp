#include <iostream>
using namespace std;

int main()
{
  int testCase;
  cin >> testCase;
  for(int i = 0; i < testCase; i++)
  {
    int a, b;
    cin >> a >> b;
    if(b == 0)
      {
          cout << ":kick:" << endl;
          continue;
      }

    if(a%b == 0)
      cout << ":wink:" << endl;
    else
      cout << ":kick:" << endl;
  }

  return 0;
}
