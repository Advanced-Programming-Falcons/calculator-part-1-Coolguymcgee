#include <iostream>
#include <string>
using namespace std;
int main(void){
int input1;
int input2;
char operation;

while(true){
cout << "welcome to my calculator please insert a number"<<endl;
cin >> input1;
cout << "now a second number"<<endl;
cin >> input2;
cout << "now what operation should be done between the two[+,-,*,/]"<<endl;
cin >> operation;
float sum = input1+input2;
float difference = input1-input2;
float product = input1*input2;
float quotiant = input1/input2;
string finished;
cout << "the answer is ";
if (operation=='+'){
    cout<<sum;
}
else if (operation=='-'){
    cout<<difference;
}
else if (operation=='*'){
    cout<<product;
}
else if (operation=='/'){
    cout<<quotiant;
}
cout<< " would you like to be done? y/n";
cin >> finished;
if(finished=="y"){
}
else{
    continue;
}
break;
}
return 0;
}