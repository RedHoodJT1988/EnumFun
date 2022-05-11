#include <iostream>
using namespace std;

int main()
{
	enum Direction { UP, DOWN, LEFT, RIGHT, STANDING };

	Direction myDirection = STANDING;

	cout << myDirection << endl;

	if (myDirection == UP)
	{
		cout << "up!" << endl;
	}
	else if (myDirection == DOWN)
	{
		cout << "down!" << endl;
	}
	else if (myDirection == LEFT)
	{
		cout << "left!" << endl;
	}
	else if (myDirection == RIGHT)
	{
		cout << "right!" << endl;
	}
	else if (myDirection == STANDING)
	{
		cout << "standing still!" << endl;
	}
	else
	{
		cout << "invalid direction" << endl;
	}

	return 0;
}