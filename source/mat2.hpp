#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"

class Mat2
{
	public:
		// Default_constr
		Mat2();
		// User_Constr
		Mat2(int a, int b, int c, int d);
		Mat2& operator*=(Mat2 const& m);
		int matrix[2][2];
		bool equal(Mat2 const& m); //AUfruf der boolfunktion
};

Mat2 operator*(Mat2 const& m0, Mat2 const& m1); //Operator für die Matrix
#endif
