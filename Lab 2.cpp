#include <iostream>
using namespace std;

//class Calculator {
//public:
//    double value;
//
//    Calculator(double initialValue) : value(initialValue) {}
//
//    Calculator& add(double other) {
//        value += other;
//        return *this;
//    }
//
//    Calculator& multiply(double other) {
//        value *= other;
//        return *this;
//    }
//
//    Calculator& power(double exponent) {
//        value = pow(value, exponent);
//        return *this;
//    }
//};
//
//int main() {
//    Calculator calc(2);
//    calc.add(3).multiply(4).power(2);
//    double result = calc.value;
//    cout << "Result: " << result << endl; // Output: Result: 100
//    return 0;
//}
//
//

using namespace std;

class MyCal { 
      
  public:        
    string name;  
    int sumvalue;
    int mulvalue;
    int expvalue;
    
    // Default constructor OR Parameterized constructor
    MyCal() {
        name = "MOAZ";
        sumvalue = 4;
        mulvalue = 8;
        expvalue = 9;
    }
    
    // Parameterized constructor
    MyCal(string r, int g, int t, int m) {
        name = r;
        sumvalue = g;
        mulvalue = t;
        expvalue = m;
    }
    
    // Copy constructor
    MyCal(const MyCal& other) {
        name = other.name;
        sumvalue = other.sumvalue;
        mulvalue = other.mulvalue;
        expvalue = other.expvalue;
    }
};

int main() {
    MyCal cal1, cal2("Ahmer", 22, 33, 44);
    
    cout << "cal1:" << endl;
    cout << cal1.name << endl;
    cout << cal1.sumvalue << endl;
    cout << cal1.mulvalue << endl;
    cout << cal1.expvalue << endl;
    
    cout << "cal2:" << endl;
    cout << cal2.name << endl;
    cout << cal2.sumvalue << endl;
    cout << cal2.mulvalue << endl;
    cout << cal2.expvalue << endl;
    
    // Creating a copy of cal2 using the copy constructor
    MyCal cal3 = cal2;
    
    cout << "cal3 (copy of cal2):" << endl;
    cout << cal3.name << endl;
    cout << cal3.sumvalue << endl;
    cout << cal3.mulvalue << endl;
    cout << cal3.expvalue << endl;
    
    return 0;
}


