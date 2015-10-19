#pragma once

template<typename V>
class Vector3
{
public:
	float x;
	float y;
	float z;

	void VectorAdd(float, float, float);
	void VectorSub();
	void Normalize();
	void Magnitude();
};

void VectorAdd(float x, float y, float z)
{

}