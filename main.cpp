#include <string>
#include <iostream>

using namespace std;

int getRating();


int main()
{
	cout << "The user gave a rating of " << getRating();

}

int getRating()
{
	int rating{};
	do
	{
		cout << "Enter a rating (1-5): \n";
		cin >> rating;
		if (!cin)
		{
			cout << "You have entered an invalid number!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			rating = 0;
		}
	} while (rating < 1 || rating > 5);

	return rating;


}
