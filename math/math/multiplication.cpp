#include <iostream>
#include <map>
using namespace std;

int main()
{
  int answer;
  map <int, float> values;
  cout << "Enter how many numbers to multiply: ";
  cin >> answer;
  float newValue;
  for (int i = 0; i < answer; i++)
  {
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values[i] = newValue;
  }
  float product;
  for (int i = 0; i < answer; i++)
  {
    product = product * values[i];
  }
  cout << "Your product for today is: " << product << endl;
  return 0;
}
