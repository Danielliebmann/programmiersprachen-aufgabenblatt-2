#include "mat2.hpp"

Mat2::Mat2(){ //EINHEITSMATRIXX
	this->matrix[0][0] = 1;
	this->matrix[0][1] = 0;
	this->matrix[1][0] = 0;
	this->matrix[1][1] = 1;
}

Mat2::Mat2(int a, int b = 0, int c = 0, int d = 0){ //Definition der einzelnen Matrizen
	this->matrix[0][0] = a;
	this->matrix[0][1] = b;
	this->matrix[1][0] = c;
	this->matrix[1][1] = d;
}
Mat2& Mat2::operator*=(Mat2 const & m){ //MatrixMultiplikationsOperator
	Mat2 temporary = *this;	
	matrix[0][0] = temporary.matrix[0][0] * m.matrix[0][0] + temporary.matrix[0][1] * m.matrix[1][0];
	matrix[0][1] = temporary.matrix[0][0] * m.matrix[0][1] + temporary.matrix[0][1] * m.matrix[1][1];
	matrix[1][0] = temporary.matrix[1][0] * m.matrix[0][0] + temporary.matrix[1][1] * m.matrix[0][1];
	matrix[1][1] = temporary.matrix[1][0] * m.matrix[0][1] + temporary.matrix[1][1] * m.matrix[1][1];

	return *this;
}

bool Mat2::equal(Mat2 const& m){ //wahrheitenschtscheidung, wenn m0*m1 = mRes 
	bool same = true;
	for (int i = 0; i < 2; i++){
	for (int j = 0; j < 2; j++){
	 if (matrix[i][j] != m.matrix[i][j]) {
	 break;
		}	
	      }
	}
	return same;
}

Mat2 operator*(Mat2 const& m0, Mat2 const& m1){
	Mat2 newM = m0;
	newM *= m1;
	 return newM;
}



			
