#include <iostream>
#include <string>

#include <stdlib.h>
#include <librsync.h>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter in your camera device name (in your /media directory): ";
	string cameraName = "/0";
	cin >> cameraName;
	string command = "rsync -av /media/${USER}/" + cameraName + " /home/${USER}/Pictures";
	system(command.c_str());
	return 0;
}
