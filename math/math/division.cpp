#include <iostream>
#include <map>
using namespace std;

int main()
{
  int answer;
  map <int, float> values;
  cout << "Enter how many numbers to divide from the first: ";
  cin >> answer;
  cout << "Enter in the first of the numbers: ";
  cin >> values[0];
  for (int i = 1; i < answer; i++)
  {
    cout << "Enter one of the other numbers: ";
    cin >> values[i];
  }
  float quotient;
  quotient = values[0];
  for (int i = 1; i < answer; i++)
    quotient = quotient - values[i];
  cout << "Your quotient for today is: " << quotient << endl;
  return 0;
}
