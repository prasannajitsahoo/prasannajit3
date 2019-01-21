#include <iostream>
using namespace std;


class Node {

	public:
	//Data
	int data;
	//Pointer to next Node
	Node * next;
	Node * prev;
	//Construct to make a ptr to NULL
	Node(int value){
		next = NULL;
		prev = NULL;
		data = value;
		       }
	   };
	class DLL{
	public:
	Node * head;
	Node * tail;
	DLL(){
		head = NULL;
             }
	//Insert
	void insert (int value){
	//Insert a new node
	Node*temp = new Node(value);
	//Insert data in Node
	temp->data = value;
	//Check if empty list
	if(head == NULL){
		head = temp;
	 		 }
	else{ //If not empty list
		Node * current = head;
		while(current->next != NULL);
		      current = current->next;
		      current->next =temp;
		temp->prev = current;
	     }
	  }
	//Insert at specific point
	void insertAt(int pos, int value){
	//Reaching place before pos
	Node * current = head;
	int i =1;
	while(i < pos){
	i++;
	current = current->next;
		      }
    					 }
	//Delete
	void delet(){
	//Storing tail in temp
	Node*temp = tail;
	//Pointing tail to NULL
	Node * current = head;
	while(current-> next!= tail){
	current = current->next;
				     }
	            }
	//Deleting an element at a position
	void deleteAt(int pos){
	//Reaching place before pos
	Node * current = head;
	int i =1;
	while(i < pos){
	i++;
	current = current->next;
		      }
	                      }
	//Counting items
	int count()
	{
	Node * current = head;
	int count1 = 0;
	while (current != NULL)
		{
	count1++;
	current = current->next;
	cout <<"NULL";
        cout <<endl;
	return count1;
		}
	}
	//Display
	void display(){
	Node * current = head;
	Node * last;
	cout <<"Print in order :";
	while(current != NULL){
	cout <<current->data<< "->";
	//Store the current in last 
	last = current;
	//Move forward
	current = current->next;
			      }
	cout << endl;
	cout << "Print in R order: ";
	while (last != NULL){
	cout <<last->data<< "->";
	//Move backwards
	last = last->prev;
		              }
	cout << endl;
	}
       };
	      
	int main(){
	DLL dll1;
	for (int i = 1; i < 4; i++){
	    dll1.insert(i);
				   }
	dll1.display();
		   }

 
 

	
