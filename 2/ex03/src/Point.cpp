#include "Point.hpp"

Point::Point() : x(0), y(0) {

}

Point::Point(const Point& other) : x(other.x), y(other.y) {
	
}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		(Fixed) this->x = other.x;
		(Fixed) this->y = other.y;
	}
	return *this;
}

Point::~Point() {

}

Point::Point(const float fx, const float fy) : x(fx), y(fy) {

}

float Point::getX() const{
	return x.toFloat();
}

float Point::getY() const{
	return y.toFloat();
}
