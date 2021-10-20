#include <iostream>
#include <cstring>
using namespace std;

int count9s(char number[])
{
	int count = 0; // To store result
	int n = strlen(number);

	// Consider every character as beginning of substring
	for (int i = 0; i < n; i++)
	{
		int sum = number[i] - '0'; //sum of digits in current substring

		if (number[i] == '9') count++;

		// One by one choose every character as an ending character
		for (int j = i+1; j < n; j++)
		{
			sum = (sum + number[j] - '0')%9;

			if (sum == 0)
			count++;
		}
	}
	return count;
}
int main()
{
	cout << count9s("4189") << endl;
	cout << count9s("1809");
	return 0;
}
