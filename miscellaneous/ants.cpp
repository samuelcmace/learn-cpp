#include <iostream>

using namespace std;

int main()
{
    int answer;
    cout << "How many ants do we have in our house? ";
    cin >> answer;
    if (answer == 0)
    {
        cout << "Good for you!" << endl;
        cout << "You don't have any ants." << endl;
    }    
    else if (answer == 1)
    {
        cout << "We can certainly deal with just one ant." << endl;
        cout << "We could just squish him into jelly." << endl;
    }
    else if (answer < 10)
    {
        cout << "Now, I think that we can deal with this many ants." << endl;
        cout << "We may need to get rid of them some day." << endl;
    }
    else if (answer > 10 && answer < 50)
    {
        cout << "I think that we may have a slight ant problem." << endl;
        cout << "I just hope that the problem dosen't grow." << endl;
    }
    else if (answer > 100 && answer < 1000)
    {
        cout << "We need to call the pest controll service." << endl;
        cout << "This is a bad ant problem." << endl;
    }
    else
    {
        cout << "WOW! There are " << answer << " ants in your house!" << endl;
    }
    return 0;
}
