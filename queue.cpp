#include <iostream>
using namespace std;
//#include <queue>
int ar[100],n=100,front=-1, rear=-1;

void insert(){
	int val;
	if(rear==n-1){
		cout<<"queue is overflow";
	}
	else
		{
			if(front==-1)
			front =0;
			cout<<"Enter the value of new element :\n";
			cin>>val;
			rear++;
			ar[rear]=val;
			cout<<"The new insert element is :"<<ar[rear]<<endl;
		}
} 
void del(){
	if(front ==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Element deleted from queue is: "<<ar[front]<<endl;
		front++;
	}
}
void display(){
	if(front==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<"Queue elements are: "<<endl;
		for(int i=front; i<=rear; i++){
			cout<<ar[i]<<""<<endl;
		}
	}
	
}
int main() {
		int ch;
		cout<<"1. Insert the element:"<<endl;
		cout<<"2. Delete the element:"<<endl;
		cout<<"3. Display the elements:"<<endl;
		cout<<"4. Exit"<<endl;
		do{
			cout<<"Enter your choice"<<endl;
			cin>>ch;
			switch(ch){
				case 1: insert();
				break;
				case 2: del(); 
				break;
				case 3: display();
				break;
				default : cout<<"Invalid option"<<endl;
			}
		}while(ch!=4);
		
//	queue <int> q;
//	q.push(45);
//	q.push(32);
//	q.push(5);
//	q.push(96);
//	
//	cout<<"The size of the queue is:"<<q.size()<<endl;
//	q.pop();
//		cout<<"The size of the queue is:"<<q.size()<<endl;
//	q.pop();
//		cout<<"The size of the queue is:"<<q.size()<<endl;
//	q.pop();
//		cout<<"The size of the queue is:"<<q.size()<<endl;
//	
//	if(q.empty()){
//		cout<<"The queue is empty"<<endl;
//	}
//	else 
//		cout<<"The queue is not empty"<<endl;
//	
//	cout<<"The front of queue is : "<<q.front()<<endl;
//	
	return 0;
}
