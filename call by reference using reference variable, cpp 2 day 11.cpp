#include<iostream>
using namespace std;
//call by reference using reference variable
	void swapReferenceVar(int &a, int &b){
		int temp =a;  //temp a b
		a = b;      // 4 4 5 
		b = temp;    //4 5 5  //4 5 4
	}
	int main(){
		int x=4, y=5;
		cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
		swapReferenceVar(x,y);
		cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
		return 0;
	}
