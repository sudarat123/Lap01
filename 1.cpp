#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
cout <<"Hello sec C"<<endl;
cout << setw(50)<<"Information Technology 'c'"<<endl;
cout << setw(45)<<"This is Turbo C++ Progarm."<<endl;
cout << setw(50)<<"Is is very easy"<<endl;
cout << setw(40)<<"I love c++"<<endl;
cout << setw(45)<<"It's high level language"<<endl;

cout<<"My Nick name is = "<<(char)83<<(char)65<<(char)73<<endl;

float f=3.99;
int i=99,s=80;
char c= 'A';
string Name = "Sirirat Chansamorn";
cout << "My name is : "<<Name<<endl;
cout << "My score1 : " << i << " points"<< endl;
cout << "My score2 : " << s << " points"<< endl;
cout << "Total : " << i+s << " points"<< endl;
cout << "Grade : " << c << endl;
cout << "GPA : " << f << endl;

return 0;

}