#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();

		Point(const float fx, const float fy);

		float getX() const;
		float getY() const;
	private:
		const Fixed x;
		const Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
