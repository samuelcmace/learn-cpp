#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(/*int argc, char *argv[]*/)
{
  int numValues;

  do {
    cout << "Enter how many numbers to calculate the median for: ";
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

  float median = 0.0f;
  unsigned int medianIndex = numValues / 2;

  if (numValues % 2 == 0) {
    median = (values[medianIndex] + values[medianIndex-1]) / 2.0f;
  } else {
    median = values[medianIndex];
  }


  cout << "Your median for today is: " << median << endl;

  return 0;
}
