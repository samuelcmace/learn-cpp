#include <iostream>
#include <QtCore>
using namespace std;

void seed() { qsrand(time(NULL)); }

int rand(int max)
{
    return qrand() % max;
}

int main(int argc, char** argv)
{
    seed();
    int max = atoi(argv[1]);
    int number = rand(max);
    cout << "Your random number is: " << number << endl;
    return 0;
}

