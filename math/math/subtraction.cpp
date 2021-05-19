#include <iostream>
#include <map>
using namespace std;

int main()
{
  int answer;
  map <int, float> values;
  cout << "Enter how many numbers to subtract from the first: ";
  cin >> answer;
  cout << "Enter in the first of the numbers: ";
  cin >> values[0];
  for (int i = 1; i < answer; i++)
  {
    cout << "Enter one of the other numbers: ";
    cin >> values[i];
  }
  float difference;
  difference = values[0];
  for (int i = 1; i < answer; i++)
    difference = difference - values[i];
  cout << "Your difference for today is: " << difference << endl;
  return 0;
}
