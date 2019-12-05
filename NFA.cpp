#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	char s[30];
	int ch = 1, i=0;
	cout << "Enter the string:";
	cin >> s;
	int rev_index = -1,direction=0;
	while (s[i] != '\0')
	{
		switch (ch)
		{
		case 1:
			i = rev_index+1;
			if (s[i] == 'a' && direction == 0)
			{
				ch = 4;
			}
			else if (s[i] == 'b')
			{
				ch = 2;
			}
			else if (s[i] == 'a' && direction == 1)
			{
				ch = 5;
			}
			break;
		case 2:
			if (s[i] == 'a' || s[i] == 'b')
				ch = 3;//Trap State
			break;
		case 4:
			if (s[i] == 'a')
			{
				
				rev_index = i ;
			}
			else
			{
				
				direction = 1;
			}
			ch = 1;
			break;
		case 5:
			if (s[i] == 'b')
				ch = 6;
			break;
		case 6:
			if(s[i]=='b')
			{
				rev_index = i;
				ch = 1;
			}
			else
			{
				ch = 3;
			}			
			
			direction = 0;
				break;
		}
		i++;

	}
	if (ch == 2)
		cout << endl << "Valid";
	else
		cout << endl << "Invalid";
	_getch();
}
