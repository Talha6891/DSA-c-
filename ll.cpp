#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class list{

public:
        node *head;
        node* tail;
        list(){
            head= NULL;
        }
        void insert(int value){

            node* temp = new node;
            temp->data= value;
            temp->next = NULL; 
            if(head==NULL){
                head = temp;
            }
            else
            {
               head = temp;  
            }
        }
        void display(){
			node* temp =head;
			while(temp !=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
        
};

int main()
{
    list l;
    l.insert(10);
    l.insert(11);
    l.display();
    return 0;
}

