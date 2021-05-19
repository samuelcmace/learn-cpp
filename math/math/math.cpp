#include <iostream>
using namespace std;

float add(float x, float y)
{ return (x + y); }
float subtract(float x, float y)
{ return (x - y); }
float multiply(float x, float y)
{ return (x * y); }
float divide(float x, float y)
{ return (x / y); }

float askFirstValue()
{
    float value = 0.0f;
    cout << "Enter in the First Number: ";
    cin >> value;
    return value;
}

float askValue()
{
    float value = 0.0f;
    cout << "Enter in a Number: ";
    cin >> value;
    return value;
}

int main()
{
    bool isDone = false;
    float value = 0.0f;
    float currentNumber = 0.0f;
    int answer;
    currentNumber = askFirstValue();
    do {
        cout << "Your current number is: " << currentNumber << endl;
        cout << endl;
        value = askValue();
        cout << endl;
        cout << "Type in one of the following numbers:" << endl;
        cout << "[1] add" << endl;
        cout << "[2] subtract" << endl;
        cout << "[3] multiply" << endl;
        cout << "[4] divide" << endl;
        cout << "[5] end program" << endl;
        cout << "[6] reset calculator" << endl;
        cout << "Enter in value and press enter: ";
        cin >> answer;
        switch(answer)
        {
            case 1:
                currentNumber = add(currentNumber, value);
                break;
            case 2:
                currentNumber = subtract(currentNumber, value);
                break;
            case 3:
                currentNumber = multiply(currentNumber, value);
                break;
            case 4:
                currentNumber = divide(currentNumber, value);
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
    } while (isDone == false);
    return 0;
}
