#include<iostream>
using namespace std;

void swap(int a, int b){
	int temp =a;
	a = b;
	b = temp;//this will not work and keep the value same.yuh
}
//call by reference using pointers
	void swapPointer(int *a, int *b){
		int temp =*a;  //temp a b
		*a = *b;      // 4 4 5 
		*b = temp;    //4 5 5  //4 5 4
	}
	int main(){
		int x=4, y=5;
		cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
		swapPointer(&x,&y);
		cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
		return 0;
	}
