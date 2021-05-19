#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int BibleBooks = 66;
//	int OldTestamentBooks = ;
//	int NewTestamentBooks = ;
	map <int, string> Books;

	Books[1] = "Genesis";
	Books[2] = "Exodus";
	Books[3] = "Leviticus";
	Books[4] = "Numbers";
	Books[5] = "Deuteronomy";
	Books[6] = "Joshua";
	Books[7] = "Judges";
	Books[8] = "Ruth";
	Books[9] = "1 Samuel";
	Books[10] = "2 Samuel";
	Books[11] = "1 Kings";
	Books[12] = "2 Kings";
	Books[13] = "1 Chronicles";
	Books[14] = "2 Chronicles";
	Books[15] = "Ezra";
	Books[16] = "Nehemiah";
	Books[17] = "Esther";
	Books[18] = "Job";
	Books[19] = "Psalms";
	Books[20] = "Proverbs";
	Books[21] = "Ecclesiastes";
	Books[22] = "Song of Solomon";
	Books[23] = "Isaiah";
	Books[24] = "Jeremiah";
	Books[25] = "Lamentations";
	Books[26] = "Ezekiel";
	Books[27] = "Daniel";
	Books[28] = "Hosea";
	Books[29] = "Joel";
	Books[30] = "Amos";
	Books[31] = "Obadiah";
	Books[32] = "Jonah";
	Books[33] = "Micah";
	Books[34] = "Nahum";
	Books[35] = "Habakkuk";
	Books[36] = "Zephaniah";
	Books[37] = "Haggai";
	Books[38] = "Zechariah";
	Books[39] = "Malachi";
	Books[40] = "Matthew";
	Books[41] = "Mark";
	Books[42] = "Luke";
	Books[43] = "John";
	Books[44] = "Acts";
	Books[45] = "Romans";
	Books[46] = "1 Corinthians";
	Books[47] = "2 Corinthians";
	Books[48] = "Galatians";
	Books[49] = "Ephesians";
	Books[50] = "Philippians";
	Books[51] = "Colossians";
	Books[52] = "1 Thessalonians";
	Books[53] = "2 Thessalonians";
	Books[54] = "1 Timothy";
	Books[55] = "2 Timothy";
	Books[56] = "Titus";
	Books[57] = "Philemon";
	Books[58] = "Hebrews";
	Books[59] = "James";
	Books[60] = "1 Peter";
	Books[61] = "2 Peter";
	Books[62] = "1 John";
	Books[63] = "2 John";
	Books[64] = "3 John";
	Books[65] = "Jude";
	Books[66] = "Revelation";

	bool isDone = false;
	
	cout << endl;
	
	do
	{
		int answer;
		cout << "Enter in the Bible Book Number: ";
		cin >> answer;
		cout << endl;
		if (answer == 0)
			isDone = true;
		else
		{
		cout << Books[answer] << endl;
		cout << endl;
		}
	} while (isDone == false);

	return 0;
}
