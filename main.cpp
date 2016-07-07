#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class Parameters
{
private:
	float I = 0.3;
	float U;
	float P;
	float B;
	float Efficiency;

public:
	Parameters()
	{
		I = 0.3;
		U = 0;
		P = 0;
		B = 0;
		Efficiency = 0;
	}

	Parameters(float i, float u, float p, float b)
	{
		I = i;
		U = u;
		P = p;
		B = b;
		Cal_Efficiency();
	}

	float getI()
	{
		return I;
	}

	void setU(float x)
	{
		U = x;
	}
	float getU()
	{
		return U;
	}

	void setP(float x)
	{
		P = x;
	}
	float getP()
	{
		return P;
	}

	void setB(float x)
	{
		B = x;
	}
	float getB()
	{
		return B;
	}

	void Cal_Efficiency() // КПД = P(U,B) / (I * U), где I = const
	{
		Efficiency = P / (I * U);
	}

	float getEfficiency()
	{
		return Efficiency;
	}



};

float getParaboloid(float b, float u)
{
	return ((b*b + u*u) / 2.0);
}

float getU(float p)
{
	return sqrt(p);
}

int main()
{
	int P[10];
	for (int i = 9; i > 0; i--)
		P[i] = i;
	//getParaboloid(0.0, 0.0);
	for (int i = 0; i < 9; i++)
	{
		cout << "P = " << i << " U = " << getU(P[i]) << " B = " << getU(P[i])  << endl;
	}
	//cout << getParaboloid(2.0,4.0) << endl;
	system("pause");
	return 0;
}
