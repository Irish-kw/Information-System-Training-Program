#include<iostream>



using namespace std; //使用這個可以把std::都拔出來 
int main(){
	
	
	//std:: ::是範疇解析運算子，屬於std這個範疇 
	//std:: namespace, 避免namespace內的cout 或 cint ...等變數跟 標頭檔變數衝突。確保main內的cout 或 cint被覆蓋掉。 
	
	//std::cout <<"Hello \n";
	//std::cout <<"這是第一個 C++程式 \n" << std::endl;	//endl 換行 
	
	
	cout <<"Hello \n";
	cout <<"這是第一個 C++程式 \n" << endl;	//endl 換行 	
	
	
	return 0;
}
