#include<iostream>
using namespace std;

class Point2D{

	public:
		Point2D(); //建構式，重載函式  
		Point2D(int x, int y); //建構式，重載函式 
		Show2D();
		int getX(), getY();
		Point2D adder(Point2D &in);
		Point2D operator+(Point2D &p);
		Point2D operator-(Point2D &p);

	private:
		int X;
		int Y;
};


// Point2D::Point2D() 代表Point2D()函式是Point2D類別的範疇 
//建構式，重載函式  
Point2D::Point2D(){
	X = 0;
	Y = 0; 
} 

//建構式，重載函式 
Point2D::Point2D(int x, int y){
	X = x;
	Y = y; 
}


Point2D::Show2D(){
	cout << "X:" << X << endl;
	cout << "Y:" << Y << endl;
} 


//公開函式，回傳私有值 
Point2D::getX(){
	return X;
}

//公開函式，回傳私有值
Point2D::getY(){
	return Y;
}


//公開函式，回傳型態為物件，傳入參數為物件 
//第一個Point2D是回傳型態為物件， 第二個Point2D是代表這個adder函式屬於Point2D類別的範疇 
Point2D Point2D::adder(Point2D &in){ //Point2D in是call by value，效率跟記憶體都不好 ，改 Point2D &in call by ref型態。 
	//若在main內用p1.adder，這邊的X代表是P1的X 
	int rX = X+in.X;
	int rY = Y+in.Y;
	Point2D Result(rX, rY); //宣告一個Result物件，將rX和rY傳進去Result物件的建構式初始化，並回傳Result整個物件 
	return Result; 
}


//上面是正常的函式寫法，下面把函式名稱改為 operator+重載運算子。 

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
	p3 = p1; //單純把p1物件的值複製過去給p3 
	p3.Show2D();
	*/

	p3.Show2D();

	//這三者效果都一樣 
	//p3 = p1.adder(p2);
	//p3 = p1.operator+(p2);
	p3 = p1+p2;

	p3.Show2D();

	return 0;
}
