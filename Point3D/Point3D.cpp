#include <iostream>
using namespace std;
class Point3D {
	int x, y, z;
	static int count;
public:
	Point3D()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Point3D(int _x, int _y, int _z) {
		x = _x;
		y = _y;
		z = _z;
	}
	void Input(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Point3D Sum(Point3D& b) {
		Point3D rez;
		rez.x = x + b.x; 
		rez.y = y + b.y;
		rez.z = z + b.z;
		return rez;
	}
	Point3D& Sum(int _x, int _y, int _z) {
		x = x + _x;
		y = this->y + _y;
		z = this->z + _z;
		return *this;
	}
	Point3D& Min(int _x, int _y, int _z) {
		x = x - _x;
		y = y - _y;
		z = z - _z;
		return *this;
	}
	Point3D& Del(int _x, int _y, int _z) {
		x = x / _x;
		y = y / _y;
		z =z / _z;
		return *this;
	}
	Point3D& Multi(int _x, int _y, int _z) {
		x = x * _x;
		y = y * _y;
		z = z * _z;
		return *this;
	}
	~Point3D() {
		count--;
	}
}
;
int main(){
	Point3D a(1, 2, 3);
	Point3D b(4, 5, 6);
	a.Sum(b);
	Point3D c = a.Sum(b);
	c = a.Sum(9, 8, 7);
	a.Min(5, 0, 5);
	a.Multi(2, 3, 4);
	a.Del(2, 3, 4);

}