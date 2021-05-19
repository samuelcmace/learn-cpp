#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(/*int argc, char *argv[]*/)
{
  int numValues;

  do {
    cout << "Enter how many numbers to calculate the range for: ";
    cin >> numValues;
  } while (numValues <= 0);

  vector <float> values;

  int i;

  for (i = 0; i < numValues; i++)
  {
    float newValue = 0.0f;
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values.push_back(newValue);
  }

  sort(values.begin(), values.end());

  // float range = 0.0f;
  float range = values[values.size()-1] - values[0];


  cout << "Your range for today is: " << range << endl;

  return 0;
}
