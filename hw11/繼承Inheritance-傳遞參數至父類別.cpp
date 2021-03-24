#include<iostream>
using namespace std;

class Point2D{

	public:
		//建構式，重載父類別函式  
		Point2D(){
			X = 0;
			Y = 0;
		}
		//建構式，重載父類別函式 
		Point2D(int x, int y){
			X = x;
			Y = y;
		}
		int getX(){
			return X;
		}
		int getY(){
			return Y;
		}
		
		void setX(int x){
			X = x;
		}
		
		void setY(int y){
			Y = y;
		}		
	private:
		int X;
		int Y;
};

//這邊的public代表繼承過來的東西的權限，如果是private，連Point3D的實體都不能直接存取使用，必須用Point3D的函式存取。 
class Point3D:public Point2D{

	public:
		//建構式，重載子類別函式
		Point3D(){
			Z = 0;
		}
		//建構式，重載子類別函式 
		Point3D(int x, int y, int z): Point2D(x,y){
			Z = z;
		}
		
		//會先呼叫父類別的建構式，才呼叫子類別的建構式 
		
		
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
	Point3D p1(1, 3, 4);
	Point3D p2;
	
	cout << "p1:(" << p1.getX() << "," << p1.getY() << "," << p1.getZ() << ")" << endl;
	
	p2.setX(5);
	p2.setY(7);
	p2.setZ(8); 
	
	cout << "p2:(" << p2.getX() << "," << p2.getY() << "," << p2.getZ() << ")" << endl;
	
	
	return 0;
}
