#include <iostream>
using namespace std;
struct node{
	
    int data;
    node* link;
};

class list{
private:
       node* head;
public:
    list(){
      head = NULL;
    }
void insert(int value){
    node* temp = new node;
    temp->data = value;
    temp->link = head;
    head = temp;
}      

void show(){
               
           node* temp1 = head;
           
           while (temp1 != NULL){
               cout<< temp1->data << " -> " ;
               temp1= temp1-> link;
           }
}
};

int main()
{
    list l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.show();
    return 0;
}
