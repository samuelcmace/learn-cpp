#include <iostream>

using namespace std;

int main()
{
    float answer = 0.0f;
    cout << "Enter in the percent of the cake that you will give me: ";
    cin >> answer;

    if (answer < 25)
    {
        cout << "Hey! I deserve more cake than this!" << endl;
    }
    else
    {
        cout << "Thank You! I am content." << endl;
    }
    return 0;
}
