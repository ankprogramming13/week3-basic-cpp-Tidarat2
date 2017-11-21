#include <iostream>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(signed char) << endl;
   cout << "Size of unsigned char : " << sizeof(unsigned char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of signed int : " << sizeof(signed int) << endl;
   cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of igned short int : " << sizeof(signed short int) << endl;
    cout << "Size of unsigned short int : " << sizeof(unsigned short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of signed long int : " << sizeof(signed long int) << endl;
    cout << "Size of float int : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of bool : " << sizeof(bool) << endl;



   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of signed char : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of signed char : " << numeric_limits<signed char>::max() << endl;

   cout << "Min of unsigned char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of unsigned char : " << numeric_limits<unsigned char>::max() << endl;


   cout << "Min of int : " << numeric_limits<int>::min() << endl;
   cout << "Max of int : " << numeric_limits<int>::max() << endl;


   cout << "Min of signed int : " << numeric_limits<signed int>::min() << endl;
   cout << "Max of signed int : " << numeric_limits<signed int>::max() << endl;




  return 0;
}
