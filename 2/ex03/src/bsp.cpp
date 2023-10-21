#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float x1 = a.getX();
	float y1 = a.getY();
	float x2 = b.getX();
	float y2 = b.getY();
	float x3 = c.getX();
	float y3 = c.getY();
	float px = point.getX();
	float py = point.getY();

	//get the area of the triangle
	float tArea = std::abs(((x2-x1)*(y3-y1)) - ((x3-x1)*(y2-y1)));
	//calculating the areas between the point and each side
	float area1 = std::abs(((x1-px)*(y2-py)) - ((x2-px)*(y1-py)));
	float area2 = std::abs(((x2-px)*(y3-py)) - ((x3-px)*(y2-py)));
	float area3 = std::abs(((x3-px)*(y1-py)) - ((x1-px)*(y3-py)));
	float pointAreaTotal = area1 + area2 + area3;
	if (pointAreaTotal == tArea) {
		return true;
	}
	return false;
}
