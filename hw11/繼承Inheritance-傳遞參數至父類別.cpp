#include<iostream>
using namespace std;

class Point2D{

	public:
		//�غc���A���������O�禡  
		Point2D(){
			X = 0;
			Y = 0;
		}
		//�غc���A���������O�禡 
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

//�o�䪺public�N���~�ӹL�Ӫ��F�誺�v���A�p�G�Oprivate�A�sPoint3D�����鳣���ઽ���s���ϥΡA������Point3D���禡�s���C 
class Point3D:public Point2D{

	public:
		//�غc���A�����l���O�禡
		Point3D(){
			Z = 0;
		}
		//�غc���A�����l���O�禡 
		Point3D(int x, int y, int z): Point2D(x,y){
			Z = z;
		}
		
		//�|���I�s�����O���غc���A�~�I�s�l���O���غc�� 
		
		
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
