#include<iostream>
using namespace std;

class Point2D{

	public:
		Point2D(); //�غc���A�����禡  
		Point2D(int x, int y); //�غc���A�����禡 
		Show2D();
		int getX(), getY();
		
		//���+�����B��l�A�����禡�A�u�n���A�έӼƤ��P�N�n 
		Point2D operator+(Point2D &p);
		Point2D operator+(int &n);
		Point2D operator-(Point2D &p);
		Point2D operator*(Point2D &p);

	private:
		int X;
		int Y;
};


// Point2D::Point2D() �N��Point2D()�禡�OPoint2D���O���då 
//�غc���A�����禡  
Point2D::Point2D(){
	X = 0;
	Y = 0; 
} 

//�غc���A�����禡 
Point2D::Point2D(int x, int y){
	X = x;
	Y = y; 
}


Point2D::Show2D(){
	cout << "X:" << X << endl;
	cout << "Y:" << Y << endl;
} 


//���}�禡�A�^�Ǩp���� 
Point2D::getX(){
	return X;
}

//���}�禡�A�^�Ǩp����
Point2D::getY(){
	return Y;
}


Point2D Point2D::operator+(Point2D &p)
{
	int x = X+p.X;
	int y = Y+p.Y;
	Point2D tmp(x, y);
	return tmp;
}

Point2D Point2D::operator+(int &n)
{
	int x = X+n;
	int y = Y+n;
	Point2D tmp(x, y);
	return tmp;
} 

Point2D Point2D::operator-(Point2D &p)
{
	int x = X-p.X;
	int y = Y-p.Y;
	Point2D tmp(x, y);
	return tmp;
}

Point2D Point2D::operator*(Point2D &p)
{
	int x = X*p.X;
	int y = Y*p.Y;
	Point2D tmp(x, y);
	return tmp;
}






int main(){
	
	Point2D p1(5,5), p2(10,10), p3;
	int n =30;

	p3.Show2D();
	p3 = p1+p2;
	p3.Show2D();

	puts("");

	p3.Show2D();
	p3 = p1+n;
	p3.Show2D();

	return 0;
}
