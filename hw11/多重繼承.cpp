#include<iostream>
#include<string>
using namespace std;

//�b�b�~ 
class Slowpoke{
	public:
		
		Slowpoke(){
			name = "�b�b�~";
		}

		void Slowpoke_skill1(){
			cout << name << "�ϥX�F�߷Q" << endl; 
		}
		
		void Slowpoke_skill2(){
			cout << name << "�ϥX�Fı���O�q" << endl; 
		}
	private:
		string name;
};


//�j�ި� 
class Shellder{
	public:
		
		Shellder(){
			name = "�j�ި�";
		}	

		void Shellder_skill1(){
			cout << name << "�ϥX�F���j" << endl; 
		}
		
		void Shellder_skill2(){
			cout << name << "�ϥX�F�B�����" << endl; 
		}
	private:
		string name;		
};



//�b�e�� 
class Slowbro:public Slowpoke, public Shellder{
	public:
		
		Slowbro(){
			name = "�b�e��";
		}

		void Slowbro_skill1(){
			cout << name << "�ϥX�F�ۧڷt��" << endl; 
		}
		
		string get_name(){
			return name;
		}
		
	private:
		string name;	
};



int main(){
	
	Slowpoke Slowpoke_obj;
	Shellder Shellder_obj;
	Slowbro Slowbro_obj;

	
	Slowpoke_obj.Slowpoke_skill1();
	Slowpoke_obj.Slowpoke_skill2();
	
	
	Shellder_obj.Shellder_skill1();
	Shellder_obj.Shellder_skill2();
	

	Slowbro_obj.Slowpoke_skill1();
	Slowbro_obj.Slowpoke_skill2();
	Slowbro_obj.Shellder_skill1();
	Slowbro_obj.Shellder_skill2();
	Slowbro_obj.Slowbro_skill1();
	
	return 0;
}
