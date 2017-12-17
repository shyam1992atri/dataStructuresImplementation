#include<iostream>
using namespace std;
struct node
{
	int data;
	// this is a node pointer because in the linked list this node 
	// pointer will be updated
	node* next;
}
// this will create a start pointer  
// which will be initialised to null
node *start = NULL;

// this function will create the node 
// note that the return type is the node pointer
node* createNode()
{
	node *temp;
	temp = new node;
	return temp;
}

// to call this function
//node *ptr = createNode();
void insertNode()
{
	//we need two pointers namely traverse and temp
	// temp to create the node and hold the data 
	// traverse to traverse throught the list
	node *temp, *traverse;
	int n;
	// these first cin statement will put the initial value
	cout<<"type -1 to stop inserting the elements"<<endl;
	cout<<"insert the data you want to put in the linked list"<<endl;
	cin>>n;// this will be the first data
	while(n!=-1)
	{	// this will create the node
		temp= createNode();
		// these two lines will create the first node and 
		// put the data into the first node and
		// make the first pointer to point at null
		temp->data=n;
		temp->next=NULL;
	
		if(start == NULL)
		{
			// this will initialise the first pointer
			start= temp;
		}
		else
		{
			traverse=start;
			while(traverse->next!=NULL)
			{	// update the traverse pointer to the next pointer
				traverse=traverse->next;
			}
			// put the current node pointer to traverse 
			traverse->next=temp;
		}
		// this cin statement will insert the corresponding next values
		cout<<"enter the value to be entered in the list"<<endl;
		cin>>n;// this will be for the subsequent data till -1 is called
		
	}
}

void printList()
{	// set the initial traverse
	node *traverse=start;
	while(traverse!=NULL)
	{ // traverse till the end of the list 
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
}

int main()
{
	int option;
	do{
		cout<<"*********---------"<<endl;
		cout<<"1 create list"<<endl;
		cout<<"2 print list "<<endl;
		cout<<"3 exit"<<endl;
		cin>>option;
		switch(option)
		{
			case 1 : insertNode();
			break;
			case 2 : printList();
			break;
			
		}

	}
			while (option !=3 );
		return 0;
}
