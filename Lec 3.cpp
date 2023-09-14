#include <iostream>
using namespace std;

class MyClass { 
      
  public:        
    int Rollno;  
    string Regno;
    string Tsub;
    
    
    MyClass( ){
    	Rollno = 10;
    	Regno = "FA 22";
    	Tsub = "Eng, Urdu";
	}
	
	MyClass(int r, string g, string t){
		Rollno = r;
		Regno = g;
		Tsub = t;
	}
	
};

int main() {
	MyClass class1, class2(22, "Sp 33", "ICT, math");
	
	cout << class1.Rollno << endl;
	cout << class1.Regno << endl;
	cout << class1.Tsub << endl;
	
	cout << class2.Rollno << endl;
	cout << class2.Regno << endl;
	cout << class2.Tsub << endl;

  return 0;
  
}
