#include <iostream>
using namespace std;
// this array will be used to impliment the stack
 int array[5];
// this is the counter to start 
 int top = -1;
 
 void insert()
 {
	 // num will be the integer which will be put into the stack
	 int num;
	 cout<<"enter the value to be inserted"<<endl;
	 cin>>num;
	 if(top==-1)
	 {
	 top++;
	 // num variable is pushed to the top of the stack
	 array[top]=num;
	 }
	 else if(top ==4)
	 { // this statement will come into action when the stack is full
		 cout<<"stack is full"<<endl;
	 }
	 else {
		 // if the stack still has space then this will come into play and 
		 // enable in filling the elements of the stack
		 ++top;
		 array[top]=num;
	 }
 }
 void remove()
 {
	 // this method will remove the top element isn the stack
	 if (top ==-1)
	 {// this method is for checking if the stack is empty or not
		 cout<<"the top is empty"<<endl;
	 }
	 else 
		{
			// this else section will remove the elemennt
			cout<<"the element removed is :"<<array[top]<<endl;
			top--;
		}
 }
 void display()
 {
	 // this method will display all the elements of the stack
	 for (int i=0;i<top;i++)
	 {
		 cout<<array[i]<<endl;
	 }
 }
 int main()
 {
	 // this is the main method which will be used to select what has to be
	 // cone withe the stack
	 int option;
	 do{
	 cout<<"1 inset more elements"<<endl;
	 cout<<"2 delete elements "<<endl;
	 cout<<"3 display elements"<<endl;
	 cout<<" 4 exit "<<endl;
	 cin>>option;
	 switch(option)
	 {
		 case 1: insert();
		 break;
		 case 2: remove();
		 break;
		 case 3: display();
		 break;
		 default: cout<<"wrong option"<<endl;
		 break;
	 }//end of switch statement
	 }// end of do statement
	while(option !=4);
		return 0;
 }