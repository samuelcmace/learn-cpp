#include <iostream>
#include <map>
using namespace std;

int main()
{
  int answer;
  map <int, float> values;
  cout << "Enter how many numbers to add: ";
  cin >> answer;
  float newValue;
  for (int i = 0; i < answer; i++)
  {
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values[i] = newValue;
  }
  float sum;
  for (int i = 0; i < answer; i++)
  {
    sum = sum + values[i];
  }
  cout << "Your sum for today is: " << sum << endl;
  return 0;
}
