//============================================================================
// Name        : cpp_practise.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next=NULL;
	node(int d)
	{
		data=d;

	}
};
void rem_dup(node*ptr)
{
	while(ptr!=NULL)
	{
		if(ptr->next!=NULL && (ptr->data == ptr->next->data))
		{
			node *tmp=ptr->next;
			ptr->next=ptr->next->next;
			delete tmp;
		}
		ptr=ptr->next;
	}
}
void display(node*p)
{
    while(p!=nullptr){
    cout<<p->data<<"->";
    p=p->next;
    }
    cout<<"null"<<endl;
}
int main() {
	node *a;
	    a=new node(1);
	    a->next=new node(2);
	    a->next->next=new node(2);
	    a->next->next->next=new node(3);
	    a->next->next->next->next=new node(5);
	    a->next->next->next->next->next=new node(5);
	    rem_dup(a);

	    display(a);
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
