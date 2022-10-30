#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}

struct *head = NULL;
node* create_node(int);

int main(){
    return 0;
}
int count = 0;
node* create_node(int num)
{
    struct node* temp,*s;
    temp = new(struct node);
    if(temp == NULL)
    {
        cout<<"Memory Not Allocated"<<endl;
        return 0;
    }
    else{
        temp->data=num;
        temp->next= NULL;
        return temp;
    }
}

void insert_begin()
{
    int num;
    cout<<"Enter the element to be inserted=> "<<endl;
    cin>>num;
    cout<<endl;
    struct node* temp, *p;

}

void display(struct Node* head)
{
    while (head != NULL) {
        cout << " " << head->data;
        head = head->next;
    }
    cout << endl;
}