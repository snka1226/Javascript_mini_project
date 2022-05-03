#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    string fullName;
    getline(cin, fullName);
    while (fullName[i] != 0)
    {
        if (fullName[i] == 32)
        {
            break;
        }
        i++;
    }
    cout << fullName[0] << ".";
    while (fullName[i] != 0)
    {
        i++;
        cout << fullName[i];
    }
    return 0;
}
/* #include <iostream>
#include <string>
using namespace std;

int main() {
  int i = 0, j = 0;
  string fullName, owog, ner;
  getline(cin, fullName);
  owog = fullName[0];
  while (fullName[i] != 0) {
    if (fullName[i] == 32) {
      break;
    }
    i++;
  }
  while (fullName[i] != 0) {
    ner = ner + fullName[i];
    i++;
    j++;
  }
  cout << owog << "." << ner;
  return 0;
} */