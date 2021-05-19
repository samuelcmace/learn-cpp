#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(/*int argc, char *argv[]*/)
{
  int numValues;

  cout << "Enter how many numbers to calculate the average for: ";
  cin >> numValues;

  vector <float> values;

  int i;

  for (i = 0; i < numValues; i++)
  {
    float newValue = 0.0f;
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values.push_back(newValue);
  }

  float valueSum = 0.0f;

  for (i = 0; i < numValues; i++)
  {
    valueSum = valueSum + values[i];
  }

  float average = valueSum / numValues;

  cout << "Your average for today is: " << average << endl;

  return 0;
}
