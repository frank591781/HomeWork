#include<iostream>
#include<math.h>
using namespace std;

class circle {
public:
	int x, y;
	int radius;
};

int main()
{
	int m;
	cin >> m;
	circle c1, c2;
	for (int i = 0; i < m; i++)
	{
		cin >> c1.x >> c1.y >> c1.radius;
		cin >> c2.x >> c2.y >> c2.radius;
		int distance_center = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
		if (distance_center <= c1.radius + c2.radius)
		{
			cout << "yes" << endl;
		}
		else
			cout << "no" << endl;
	}
	return 0;
}