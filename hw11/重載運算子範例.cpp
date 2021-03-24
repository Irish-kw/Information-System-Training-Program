#include<iostream>
using namespace std;

class Point2D{

	public:
		Point2D(); //�غc���A�����禡  
		Point2D(int x, int y); //�غc���A�����禡 
		Show2D();
		int getX(), getY();
		Point2D adder(Point2D &in);
		Point2D operator+(Point2D &p);
		Point2D operator-(Point2D &p);

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


//���}�禡�A�^�ǫ��A������A�ǤJ�ѼƬ����� 
//�Ĥ@��Point2D�O�^�ǫ��A������A �ĤG��Point2D�O�N��o��adder�禡�ݩ�Point2D���O���då 
Point2D Point2D::adder(Point2D &in){ //Point2D in�Ocall by value�A�Ĳv��O���鳣���n �A�� Point2D &in call by ref���A�C 
	//�Y�bmain����p1.adder�A�o�䪺X�N��OP1��X 
	int rX = X+in.X;
	int rY = Y+in.Y;
	Point2D Result(rX, rY); //�ŧi�@��Result����A�NrX�MrY�Ƕi�hResult���󪺫غc����l�ơA�æ^��Result��Ӫ��� 
	return Result; 
}


//�W���O���`���禡�g�k�A�U����禡�W�٧אּ operator+�����B��l�C 

Point2D Point2D::operator+(Point2D &p)
{
	int x = X+p.X;
	int y = Y+p.Y;
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








int main(){
	
	Point2D p1(5,5), p2(10,10), p3;
	
	/*
	p1.Show2D();
	p2.Show2D();
	p3.Show2D();
	p3 = p1; //��§�p1���󪺭Ƚƻs�L�h��p3 
	p3.Show2D();
	*/

	p3.Show2D();

	//�o�T�̮ĪG���@�� 
	//p3 = p1.adder(p2);
	//p3 = p1.operator+(p2);
	p3 = p1+p2;

	p3.Show2D();

	return 0;
}
