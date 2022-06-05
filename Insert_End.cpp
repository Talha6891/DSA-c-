#include <iostream>
using namespace std;

struct node
{
    int data;
    node* link;
};

class list{

private: 
        node* head;
public:
       list(){
           head= NULL;
       }

       void insert(int value){

           node* temp = new node;
           temp->data = value;
           temp->link = NULL;
           node* ptr = head;
        if(head == NULL){
            head = temp;
        }
        else{
           while(ptr->link != NULL){
               ptr = ptr->link;
           }
           ptr->link = temp;
        }
       }
       void show(){
           node* temp ;
           temp = head;

           while (temp != NULL)
           {
               cout<< temp->data <<" -> ";
               temp= temp->link;
           }
           cout<<"NULL";
       }

};

int main()
{
    list l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.show();
    return 0;
}

