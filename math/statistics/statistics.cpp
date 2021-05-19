#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

vector<float> askValues()
{
  unsigned int numValues;
  cout << "Enter how many numbers to calculate statistics for: ";
  cin >> numValues;

  vector <float> values;

  int i;

  for (unsigned int i = 0; i < numValues; i++)
  {
    float newValue = 0.0f;
    cout << "Enter one of the numbers: ";
    cin >> newValue;
    values.push_back(newValue);
  }

  return values;
}


void average(const vector<float>& values)
{
  float valueSum = 0.0f;

  for (unsigned int i = 0; i < values.size(); i++)
  {
    valueSum = valueSum + values[i];
  }

  float average = valueSum / values.size();

  cout << "Your average for today is: " << average << endl;
}

void median(const vector<float>& values)
{
  vector<float> sortValues( values );
  sort(sortValues.begin(), sortValues.end());

  float median = 0.0f;
  unsigned int medianIndex = values.size() / 2;

  median = sortValues[medianIndex];

  cout << "Your median for today is: " << median << endl;
}

void range(const vector<float>& values)
{
  vector<float> sortValues( values );
  sort(sortValues.begin(), sortValues.end());

  // float range = 0.0f;
  float range = values[values.size()-1] - values[0];

  cout << "Your range for today is: " << range << endl;
}

void mode(const vector<float>& values)
{
  map <float, unsigned int> occurrences;

  for (unsigned int i = 0; i < values.size(); i++)
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
}

int main(/*int argc, char *argv[]*/)
{
  // This determines if it will return 0 or not.
  bool isDone = false;

  vector<float> values( askValues() );

  cout << endl;
  do {
    int answer;
    cout << "Type in one of the following numbers:" << endl;
    cout << "[1] average" << endl;
    cout << "[2] median" << endl;
    cout << "[3] range" << endl;
    cout << "[4] mode" << endl;
    cout << "[5] end program" << endl;
    cout << "[6] ask for numbers again" << endl;
    cout << "Enter in value and press enter: ";
    cin >> answer;
    cout << endl;
    switch(answer)
    {
      case 1:
        average(values);
        break;
      case 2:
        median(values);
        break;
      case 3:
        range(values);
        break;
      case 4:
        mode(values);
        break;
      case 5:
        isDone = true;
        break;
      case 6:
        return main();
        break;
      default:
        return 0;
        break;
    }
    if (isDone == false)
    {
      cout << endl;
    }
  } while(isDone == false);
  return 0;
}
