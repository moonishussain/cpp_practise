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
node* rev(node *ptr, int n)
{
	if(ptr==NULL)
		return NULL;
	int n1=n;
	node*p1=NULL;
	node*p2=ptr;
	node*p3=p2->next;
	while(p2!=NULL && n>0)
	{
		p2->next=p1;
		p1=p2;
		p2=p3;
		if(p3!=NULL)
			p3=p3->next;
		n--;
	}
	if(p2!=NULL)
	{
		ptr->next=rev(p2,n1);
	
	}
	return p1;
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
	    a->next->next=new node(3);
	    a->next->next->next=new node(4);
	    a->next->next->next->next=new node(5);
	    a->next->next->next->next->next=new node(6);
	    a=rev(a,2);

	    display(a);
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
