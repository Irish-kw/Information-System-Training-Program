#include<iostream>
#include<string>
using namespace std;

//呆呆獸 
class Slowpoke{
	public:
		
		Slowpoke(){
			name = "呆呆獸";
		}

		void Slowpoke_skill1(){
			cout << name << "使出了冥想" << endl; 
		}
		
		void Slowpoke_skill2(){
			cout << name << "使出了覺醒力量" << endl; 
		}
	private:
		string name;
};


//大舌貝 
class Shellder{
	public:
		
		Shellder(){
			name = "大舌貝";
		}	

		void Shellder_skill1(){
			cout << name << "使出了水槍" << endl; 
		}
		
		void Shellder_skill2(){
			cout << name << "使出了冰凍光束" << endl; 
		}
	private:
		string name;		
};



//呆河馬 
class Slowbro:public Slowpoke, public Shellder{
	public:
		
		Slowbro(){
			name = "呆河馬";
		}

		void Slowbro_skill1(){
			cout << name << "使出了自我暗示" << endl; 
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
