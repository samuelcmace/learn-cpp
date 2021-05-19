#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int answer;
  bool isDone = false;
  do {
    cout << "Do you want to calculate statistics or regular math?" << endl;
    cout << "[1] regular math" << endl;
    cout << "[2] statistics" << endl;
    cout << "[3] end program" << endl;
    cout << "Which one do you choose: ";
    cin >> answer;
    cout << endl;
    switch (answer)
    {
      case 1:
        system("./bin/math");
        break;
      case 2:
        system("./bin/statistics");
        break;
      case 3:
        isDone = true;
        break;
      }
    } while (isDone == false);
  return 0;
}
