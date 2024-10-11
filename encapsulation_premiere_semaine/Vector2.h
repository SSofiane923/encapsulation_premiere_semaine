#pragma once
class Vector2
{

	float x;
	float y;

public:
	Vector2();
	Vector2(float _x, float _y);
		
	void setx(float i);
	void sety(float j);
	void setx(std::string xStr);
		
	float getx();
	float gety();

	Vector2 operator+(const Vector2& right);

};