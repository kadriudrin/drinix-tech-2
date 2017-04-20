#pragma once
#ifndef Vec2_h
#define Vec2_h
class Vec2
{
public:
	float x, y;
	Vec2();
	Vec2(float, float);
	// assume the object holds reusable storage, such as a heap-allocated buffer mArray
	Vec2& operator=(const Vec2& other) // copy assignment
	{
		if (this != &other) { // self-assignment check expected
			this->x = other.x;
			this->y = other.y;
		}
		return *this;
	};

	bool operator==(const Vec2& other) // copy assignment
	{
		return ((this->x == other.x) && (this->y == other.y));
	};

	bool operator!=(const Vec2& other) // copy assignment
	{
		return !(*this == other);
	};

	Vec2& operator+(const Vec2& other) // copy assignment
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	};

	Vec2& operator-(const Vec2& other) // copy assignment
	{
		this->x -= other.x;
		this->y -= other.y;
		return *this;
	};

	Vec2& operator+=(const Vec2& other) // copy assignment
	{
		this->x += other.x;
		this->y += other.y;
		return *this;
	};

	Vec2& operator-=(const Vec2& other) // copy assignment
	{
		this->x -= other.x;
		this->y -= other.y;
		return *this;
	};

	Vec2& operator*(const Vec2& other) // copy assignment
	{
		this->x *= other.x;
		this->y *= other.y;
		return *this;
	};

	Vec2& operator/(const Vec2& other) // copy assignment
	{
		this->x /= other.x;
		this->y /= other.y;
		return *this;
	};

	Vec2& operator*=(const Vec2& other) // copy assignment
	{
		this->x *= other.x;
		this->y *= other.y;
		return *this;
	};

	Vec2& operator/=(const Vec2& other) // copy assignment
	{
		this->x /= other.x;
		this->y /= other.y;
		return *this;
	};

	Vec2& operator+(const float& other) // copy assignment
	{
		this->x += other;
		this->y += other;
		return *this;
	};

	Vec2& operator-(const float& other) // copy assignment
	{
		this->x -= other;
		this->y -= other;
		return *this;
	};

	Vec2& operator*=(const float& other) // copy assignment
	{
		this->x *= other;
		this->y *= other;
		return *this;
	};

	Vec2& operator/=(const float& other) // copy assignment
	{
		this->x /= other;
		this->y /= other;
		return *this;
	};

	Vec2& operator*=(const int& other) // copy assignment
	{
		this->x *= (float)other;
		this->y *= (float)other;
		return *this;
	};

	Vec2& operator/=(const int& other) // copy assignment
	{
		this->x /= (float)other;
		this->y /= (float)other;
		return *this;
	};

	~Vec2();
};
#endif