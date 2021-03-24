#include<iostream>
using namespace std;

class Point1D{
	public:
		//篶Α更摸ㄧΑ  
		Point1D(){
			X = 0;
		}
		//篶Α更摸ㄧΑ 
		Point1D(int x){
			X = x;
		}
		int getX(){
			return X;
		}
		void setX(int x){
			X = x;
		}
	private:
		int X;
};

class Point2D: public Point1D{

	public:
		//篶Α更摸ㄧΑ  
		Point2D(){
			Y = 0;
		}
		//篶Α更摸ㄧΑ 
		Point2D(int x, int y):Point1D(x){
			Y = y;
		}
		int getY(){
			return Y;
		}
		void setY(int y){
			Y = y;
		}
	private:
		int Y;
};

class Point3D: public Point2D{

	public:
		//篶Α更摸ㄧΑ  
		Point3D(){
			Z = 0;
		}
		//篶Α更摸ㄧΑ 
		Point3D(int x, int y, int z):Point2D(x,y){
			Z = z;
		}
		int getZ(){
			return Z;
		}
		void setZ(int z){
			Z = z;
		}
	private:
		int Z;
};


int main(){
	
	Point1D d1;
	Point2D d2;
	Point3D d3_1(1,3,4), d3_2;
	
	
	cout << "d3_1:(" << d3_1.getX() << "," << d3_1.getY() << "," << d3_1.getZ() << ")" << endl;
	
	d3_2.setX(5);
	d3_2.setY(7);
	d3_2.setZ(8);
	
	cout << "d3_2:(" << d3_2.getX() << "," << d3_2.getY() << "," << d3_2.getZ() << ")" << endl;	
	
	return 0;
}
