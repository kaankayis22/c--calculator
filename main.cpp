#include <iostream>
#include <cmath>

using namespace std;

int main() {

string name;
cout << "To get started, please enter your name: ";
getline(cin, name);
int restart = 0;
char op;
double num1;
double num2;
double answer;


cout << "Hello " <<name <<"! What operation will you like to use; please select one of the following options, using the corresponding letter. \n A) Addition \n B) Subtraction \n C) Multiplication \n D) Divison \n E) credits \n : " ; 
cin >> op;

if (op == 'A' or op == 'a') {
  string hellopersonreadingthis = "add";
 cout << "Ok, what is the first number you will like to " << hellopersonreadingthis << "? ";
cin >> num1;
 cout << "Ok, then what is the second number you will like to " << hellopersonreadingthis << "? ";
cin >> num2;

answer = num1 + num2; 
cout << "Your answer is " << answer << "!\n";
}
else if (op == 'b' or op == 'b') {
  string hellopersonreadingthis = "subtract";
 cout << "Ok, what is the first number you will like to " << hellopersonreadingthis << "? ";
cin >> num1;
 cout << "Ok, then what is the second number you will like to " << hellopersonreadingthis << "? ";
cin >> num2;

answer = num1 - num2; 
cout << "Your answer is " << answer << "!\n";
restart =3;
}
else if (op == 'C' or op == 'c') {
  string hellopersonreadingthis = "multiply";
 cout << "Ok, what is the first number you will like to " << hellopersonreadingthis << "? ";
cin >> num1;
 cout << "Ok, then what is the second number you will like to " << hellopersonreadingthis << "? ";
cin >> num2;

answer = num1 * num2; 
cout << "Your answer is " << answer << "!\n";
restart =3;
}
else if (op == 'D' or op == 'd') {
  string hellopersonreadingthis = "divide";
 cout << "Ok, what is the first number you will like to " << hellopersonreadingthis << "? ";
cin >> num1;
 cout << "Ok, then what is the second number you will like to " << hellopersonreadingthis << "? ";
cin >> num2;
if (num2 == 0) {
  cout << "You cannot divide by zero! \n";
  restart =3;
}
else {
answer = num1 / num2; 
cout << "Your answer is " << answer << "!\n";
restart =3;
}
}
else if (op == 'e' or op == 'E') {
  cout << "This was made by Kaan Kayis!\n";
  

}



string kaan;

  cout << "Would you now like to restart? Please type (yes) or (no) : " ;
  cin >> kaan;

if (kaan == "Yes" or kaan == "yes") {

}
else if (kaan == "no" or kaan == "No") {

}

  return 0;
}