#include "PRL_types.h"


// Declaration of PRL_Point

PRL_Point :: PRL_Point() : x(0), y(0)
{
	;
}

PRL_Point :: PRL_Point(int x_y) : x(x_y), y(x_y)
{
	;
}

PRL_Point :: PRL_Point(int x_, int y_) : x(x_), y(y_)
{
	;
}

PRL_Point :: PRL_Point(PRL_Point const& point) : x(point.x), y(point.y)
{
	;
}

PRL_Point :: PRL_Point(PRL_FPoint const& point) : x(static_cast<int>(point.x)), y(static_cast<int>(point.y))
{
	;
}

PRL_Point :: PRL_Point(PRL_DPoint const& point) : x(static_cast<int>(point.x)), y(static_cast<int>(point.y))
{
	;
}

PRL_Point :: ~PRL_Point()
{
	;
}

void PRL_Point :: set(int x_, int y_)
{
	x = x_;
	y = y_;
}

// Declaration of PRL_FPoint

PRL_FPoint :: PRL_FPoint() : x(0.0), y(0.0)
{
	;
}

PRL_FPoint :: PRL_FPoint(float x_y) : x(x_y), y(x_y)
{
	;
}

PRL_FPoint :: PRL_FPoint(float x_, float y_) : x(x_), y(y_)
{
	;
}

PRL_FPoint :: PRL_FPoint(PRL_FPoint const& fpoint) : x(fpoint.x), y(fpoint.y)
{
	;
}

PRL_FPoint :: PRL_FPoint(PRL_Point const& point) : x(static_cast<float>(point.x)), y(static_cast<float>(point.y))
{
	;
}

PRL_FPoint :: PRL_FPoint(PRL_DPoint const& point) : x(static_cast<float>(point.x)), y(static_cast<float>(point.y))
{
	;
}

PRL_FPoint :: ~PRL_FPoint()
{
	;
}

void PRL_FPoint :: set(float x_, float y_)
{
	x = x_;
	y = y_;
}

// Declaration of PRL_DPoint

PRL_DPoint :: PRL_DPoint() : x(0.0), y(0.0)
{
	;
}

PRL_DPoint :: PRL_DPoint(double x_y) : x(x_y), y(x_y)
{
	;
}

PRL_DPoint :: PRL_DPoint(double x_, double y_) : x(x_), y(y_)
{
	;
}

PRL_DPoint :: PRL_DPoint(PRL_DPoint const& dpoint) : x(dpoint.x), y(dpoint.y)
{
	;
}

PRL_DPoint :: PRL_DPoint(PRL_Point const& point) : x(static_cast<double>(point.x)), y(static_cast<double>(point.y))
{
	;
}

PRL_DPoint :: PRL_DPoint(PRL_FPoint const& point) : x(static_cast<double>(point.x)), y(static_cast<double>(point.y))
{
	;
}

PRL_DPoint :: ~PRL_DPoint()
{
	;
}

void PRL_DPoint :: set(double x_, double y_)
{
	x = x_;
	y = y_;
}

// Declaration of PRL_Rect

PRL_Rect :: PRL_Rect() : x(0.0), y(0.0), w(0), h(0)
{
	;
}

PRL_Rect :: PRL_Rect(int x_, int y_, int w_, int h_) : x(x_), y(y_), w(w_), h(h_)
{
	;
}

PRL_Rect :: PRL_Rect(PRL_Point const& point, int w_, int h_) : x(point.x), y(point.y), w(w_), h(h_)
{
	;
}

PRL_Rect :: PRL_Rect(PRL_Rect const& rect) : x(rect.x), y(rect.y), w(rect.w), h(rect.h)
{
	;
}

PRL_Rect :: PRL_Rect(PRL_FRect const& rect) : x(static_cast<int>(rect.x)), y(static_cast<int>(rect.y)),
w(rect.w), h(rect.h)
{
	;
}

void PRL_Rect :: set(int x_, int y_) noexcept
{
	x = x_;
	y = y_;
}

void PRL_Rect :: set(int x_, int y_, int w_, int h_) noexcept
{
	x = x_;
	y = y_;
	w = w_;
	h = h_;
}

void PRL_Rect :: set(PRL_Point const& x_y, PRL_Point const& w_h) noexcept
{
    x = x_y.x;
    y = x_y.y;
    w = w_h.x;
    h = w_h.y;
}

PRL_Rect :: ~PRL_Rect()
{
	;
}

// Declaration of PRL_FRect

PRL_FRect :: PRL_FRect() : x(0.0), y(0.0), w(0), h(0)
{
	;
}

PRL_FRect :: PRL_FRect(float x_, float y_, int w_, int h_) : x(x_), y(y_), w(w_), h(h_)
{
	;
}

PRL_FRect :: PRL_FRect(PRL_FPoint const& point, int w_, int h_) : x(point.x), y(point.y), w(w_), h(h_)
{
	;
}

PRL_FRect :: PRL_FRect(PRL_FRect const& rect) : x(rect.x), y(rect.y), w(rect.w), h(rect.h)
{
	;
}

PRL_FRect :: PRL_FRect(PRL_Rect const& rect) : x(static_cast<float>(rect.x)), y(static_cast<float>(rect.y)),
w(rect.w), h(rect.h)
{
	;
}

void PRL_FRect :: set(float x_, float y_) noexcept
{
	x = x_;
	y = y_;
}

void PRL_FRect :: set(float x_, float y_, int w_, int h_) noexcept
{
	x = x_;
	y = y_;
	w = w_;
	h = h_;
}

void PRL_FRect :: set(PRL_FPoint const& x_y, PRL_Point const& w_h) noexcept
{
    x = x_y.x;
    y = x_y.y;
    w = w_h.x;
    h = w_h.y;
}

PRL_FRect :: ~PRL_FRect()
{
	;
}

// Declaration of PRL_Circle

PRL_Circle :: PRL_Circle() : x(0), y(0), r(0)
{
	;
}

PRL_Circle :: PRL_Circle(int x_, int y_, int r_) : x(x_), y(y_), r(r_)
{
	;
}

PRL_Circle :: PRL_Circle(PRL_Point const& center, int r_) : x(center.x), y(center.y), r(r_)
{
	;
}

PRL_Circle :: PRL_Circle(PRL_Circle const& circle) : x(circle.x), y(circle.y), r(circle.r)
{
	;
}

PRL_Circle :: ~PRL_Circle()
{
	;
}

PRL_Point PRL_Circle :: getCenter() const
{
	PRL_Point p(x, y);
	return p;
}

// Declaration of PRL_FCircle

PRL_FCircle :: PRL_FCircle() : x(0.0), y(0.0), r(0.0)
{
	;
}

PRL_FCircle :: PRL_FCircle(float x_, float y_, float r_) : x(x_), y(y_), r(r_)
{
	;
}

PRL_FCircle :: PRL_FCircle(PRL_FPoint const& center, float r_) : x(center.x), y(center.y), r(r_)
{
	;
}

PRL_FCircle :: PRL_FCircle(PRL_FCircle const& fcircle) : x(fcircle.x), y(fcircle.y), r(fcircle.r)
{
	;
}

PRL_FCircle :: ~PRL_FCircle()
{
	;
}

PRL_FPoint PRL_FCircle :: getCenter() const
{
	PRL_FPoint p(x, y);
	return p;
}


PRL_Point point_temp;
PRL_FPoint fpoint_temp;
PRL_DPoint dpoint_temp;

PRL_Point const& operator+(PRL_Point const& p, PRL_Point const& q) noexcept
{
	point_temp.set(p.x + q.x, p.y + q.y);
	return point_temp;
}

PRL_Point const& operator-(PRL_Point const& p, PRL_Point const& q) noexcept
{
	point_temp.set(p.x - q.x, p.y - q.y);
	return point_temp;
}

PRL_Point const& operator-(PRL_Point const& p) noexcept
{
	point_temp.set(-p.x, -p.y);
	return point_temp;
}

PRL_FPoint const& operator+(PRL_FPoint const& p, PRL_FPoint const& q) noexcept
{
	fpoint_temp.set(p.x + q.x, p.y + q.y);
	return fpoint_temp;
}

PRL_FPoint const& operator-(PRL_FPoint const& p, PRL_FPoint const& q) noexcept
{
	fpoint_temp.set(p.x - q.x, p.y - q.y);
	return fpoint_temp;
}

PRL_FPoint const& operator-(PRL_FPoint const& p) noexcept
{
	fpoint_temp.set(-p.x, -p.y);
	return fpoint_temp;
}

PRL_DPoint const& operator+(PRL_DPoint const& p, PRL_DPoint const& q) noexcept
{
	dpoint_temp.set(p.x + q.x, p.y + q.y);
	return dpoint_temp;
}

PRL_DPoint const& operator-(PRL_DPoint const& p, PRL_DPoint const& q) noexcept
{
	dpoint_temp.set(p.x - q.x, p.y - q.y);
	return dpoint_temp;
}

PRL_DPoint const& operator-(PRL_DPoint const& p) noexcept
{
	dpoint_temp.set(-p.x, -p.y);
	return dpoint_temp;
}

int PRL_ScalarProduct(PRL_Point p, PRL_Point q) noexcept
{
	return p.x * q.x + p.y * q.y;
}

float PRL_ScalarProduct(PRL_FPoint p, PRL_FPoint q) noexcept
{
	return p.x * q.x + p.y * q.y;
}

double PRL_ScalarProduct(PRL_DPoint p, PRL_DPoint q) noexcept
{
	return p.x * q.x + p.y * q.y;
}
