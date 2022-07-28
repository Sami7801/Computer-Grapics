#include <iostream>
using namespace std;
float x1,y1,x2,y2;

int round(float n) {
	if (n - (int)n < 0.5)
		return (int)n;
	return (int)(n + 1);
}
void simpledda(int x0, int y0, int x1, int y1) {

	int dx = x1 - x0;
	int dy= y1 - y0;

	int step;
	if (abs(dx) > abs(dy))
		step = abs(dx);
	else
		step = abs(dy);

	float x_incr = (float)dx / step;
	float y_incr = (float)dy / step;

	float x = x0;
	float y = y0;

	for (int i = 0; i < step; i ++) {
		cout << round(x) << " " << round(y) << "\n";
		x += x_incr;
		y += y_incr;
	}
}

int main() {

	cout<<"Enter the value of x1 and y2: ";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;

	simpledda(x1, y1, x2, y2);
	return 0;
}


