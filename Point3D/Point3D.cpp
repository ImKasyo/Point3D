#include <iostream>
using namespace std;
class Point3D {
	int x, y, z;
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
}
;
int main(){

}