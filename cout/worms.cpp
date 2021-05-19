#include <iostream>

using namespace std;

int main()
{
    int answer;
    cout << "How many worms does Andrew like to collect: ";
    cin >> answer;
    if (answer == 0)
    {
        cout << "Oh... I thought that Andrew liked to collect worms." << endl;
    }
    else if (answer == 1)
    {
        cout << "I guess he could either only find one worm or he dosen't like to collect too many worms." << endl;
    }
    else if (answer == 2 || answer == 3)
    {
        cout << "He collects a descent amount of worms." << endl;
    }
    else if (answer > 3 && answer < 5)
    {
        cout << "That Andrew surely collects a lot of worms." << endl;
    }
    else if (answer > 5 && answer < 10)
    {
        cout << "Who does that Andrew think he is? Is he a worm collector?" << endl;
    }
    else if (answer > 10 && answer < 15)
    {
        cout << "Phew! He must have had to dig far and wide to find that many worms." << endl;
    }
    else if (answer > 15 && answer < 20)
    {
        cout << "He is one tough guy! He can find ANY WORM!" << endl;
    }
    else if (answer > 20 && answer < 100)
    {
        cout << "He must have gone to an apple orchard to find those worms!" << endl;
    }
    else if (answer > 100 && answer < 500)
    {
        cout << "Simply impossible! That Andrew has beaten the worm-finding record!" << endl;
    }
    else if (answer > 500 && answer < 1000)
    {
        cout << "Unreal. I don't even believe it. Andrew can't find " << answer << " worms!" << endl;
    }
    else if (answer == 1000 || answer == 10 || answer == 20 || answer == 100 || answer == 5 || answer == 15 || answer == 500)
    {
    cout << "That Andrew \"cant\" find exactly "  << answer << " worms. WOW!" << endl;
    }
    else if (answer > 1000)
    {
        cout << "I don't see any natural occurrence of any boy alone finding " << answer << " worms. It is just not done." << endl;
    }
    else
    {
        cout << "Opps! That's Embarrassing. There is a bug in the code." << endl;
    }
    return 0;
}
