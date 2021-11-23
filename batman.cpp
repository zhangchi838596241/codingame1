#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int w; // width of the building.
	int h; // height of the building.
	cin >> w >> h; cin.ignore();
	int n; // maximum number of turns before game over.
	cin >> n; cin.ignore();
	int x0;
	int y0;
	cin >> x0 >> y0; cin.ignore();

	string U, UR, R, DR, D, DL, L, UL;
	int x_p, y_p;
	x_p = x0;
	y_p = y0;
	int x1, x2, y1, y2;
	x1 = 0;
	x2 = w;
	y1 = 0;
	y2 = h;
	// game loop
	while (1) {
		string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
		cin >> bomb_dir; cin.ignore();

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;

		if (bomb_dir.find("U") != std::string::npos)
		{
			y2 = y_p - 1;
			y_p = y_p - (y2 - y1) / 2 - 1;
		}
		if (bomb_dir.find("D") != std::string::npos)
		{
			y1 = y_p + 1;
			y_p = y_p + (y2 - y1) / 2 + 1;
		}
		if (bomb_dir.find("R") != std::string::npos)
		{
			x1 = x_p + 1;
			x_p = x_p + (x2 - x1) / 2 + 1;
		}
		if (bomb_dir.find("L") != std::string::npos)
		{
			x2 = x_p - 1;
			x_p = x_p - (x2 - x1) / 2 - 1;
		}


		// the location of the next window Batman should jump to.
		cout << x_p << " " << y_p << endl;
	}
}