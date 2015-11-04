#include "Vector.h"
#include <stdexcept>

using namespace std;

namespace Vector3
{
	float Vector3Maths::Add(float x, float y, float z)
	{
		return x + y + z;
	}

	float Vector3Maths::Subtract(float x, float y, float z)
	{
		return x - y - z;
	}

	float Vector3Maths::Multiply(float x, float y, float z)
	{
		return x * y * z;
	}

	float Vector3Maths::Divide(float x, float y, float z)
	{
		return x / y / z;
	}
}