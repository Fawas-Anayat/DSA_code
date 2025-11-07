#include <iostream>
using namespace std;

struct node
{
    int data;
    node * next;
};
node * head =NULL;

// create new node
void create_new_node(node *&head , int val)
{
    node *newnode = new node;
    newnode->data=val;
    newnode->next=NULL;
    head =newnode;
};

//insert at head
void insert_at_head(node *&head,int val)
    {
        node *newnode = new node;
        if (head==NULL)
        {
            newnode->data=val;
            newnode->next=newnode;
            head=newnode;
        }
        else
        {
            node *temp =head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->data=val;
            newnode->next=NULL;
        }
    }

int display(node *&head)
    {
        node *temp=head;
        if(temp==NULL){
            cout<<"the list is empty"<<endl;
            return 0;
        }
        cout<<"the data of the list"<<endl;
        while (temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    
        return 0;
    }

int main(){
node *head=NULL;
create_new_node(head,10);
create_new_node(head,20);
create_new_node(head,260);
insert_at_head(head,30);
display(head);
}