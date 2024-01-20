#include<iostream>
using namespace std;
class myfristclass
{
public:
    int a = 5;


  void multiplyprogram(){
    int x,Y;
    cin >> x >> Y ;
    cout << (x*Y);
    }
    void subtractionprogram(){
    int d,v;
    cout << "enter the value for subtra";
    cin >> d >> v ;
    cout << "enter the value \n";
    cout << (d-v);
    }
    void divisionprogram(){
    int w,n;
    cout << "\n given the value";
    cin >> w >> n;
    cout << "given the value \n";
    cout << (w/n);
    }
    void modulusprogram(){
    int r,f;
    cout << "\n enter the value";
    cin >> r >> f;
    cout << "enter the value \n";
    cout << (r%f);
    }
};


 void additionprogram(){
   int b,c;
   cout << "enter value for addition program \n";
   cin  >> b >> c;
   cout << "enter valu for\n";
   cout << (b+c);
}
 int main(){

     additionprogram();
     myfristclass mfc,fc;
     cout << "\n given for value  " << mfc.a;
    cout << "\n given for value " << (mfc.a + 10);
    mfc.multiplyprogram();
    mfc.subtractionprogram();
    mfc.divisionprogram();
    mfc.modulusprogram();
};






/*
#include <iostream>
#include <string>
using namespace std;

void spaceclass(){
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello";   // String

  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
}
int main () {
  // Creating variables
 spaceclass();
 spaceclass();
  return 0;
}
*/
