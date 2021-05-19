#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main()
{
  unsigned int numValues;

  cout << "How many numbers do you want to calculate the mode for: ";
  cin >> numValues;

  vector <float> values;

  unsigned int i;

  for (i = 0; i < numValues; i++)
  {
    float newValue = 0.0f;
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values.push_back(newValue);
  }

  map <float, unsigned int> occurrences;

  for (unsigned int i = 0; i < numValues; i++)
  {
    float value = values[i];
    if (occurrences.find(value) == occurrences.end())
    {
      occurrences[value] = 1;
    }
    else
    {
      occurrences[value]++;
    }
  }

  map <float, unsigned int>::iterator it;
  float mode = 0.0f;
  unsigned int modeOccurrences = 0;

  for (it = occurrences.begin(); it != occurrences.end(); ++it)
  {
    if (it->second > modeOccurrences)
    {
      modeOccurrences = it->second;
      mode = it->first;
    }
  }

  cout << "Your mode for today is: " << mode << endl;

  return 0;
}
