#include <iostream>
#include <list>
#include <string>

using namespace std;

void process_keystrokes(const string &s)
{
	list<char> text;
	auto it = text.begin(); // Iterator represents the cursor position

	for (char ch : s)
	{
		if (ch == '[')
		{
			it = text.begin(); // Move cursor to the beginning
		}
		else if (ch == ']')
		{
			it = text.end(); // Move cursor to the end
		}
		else
		{
			text.insert(it, ch); // Insert character at cursor position
		}
	}

	// Print the final string
	for (char ch : text)
	{
		cout << ch;
	}
	cout << '\n';
}

int main()
{
	string s;
	while (getline(cin, s))
	{ // Read multiple test cases until EOF
		process_keystrokes(s);
	}
	return 0;
}