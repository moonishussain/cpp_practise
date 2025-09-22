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
node* mid_ll(node* ptr, node*last)
{
	if(ptr==NULL)
		return NULL;// never execute in this case
	node* s=ptr;
	node* f=ptr->next;
	while(f!=last && f->next!=last)
	{
		s=s->next;
		f=f->next->next;
	}
	return s;

}
void bs(node *ptr,int d)
{
	node*first=ptr;
	node*last=NULL;
	while(first!=last)
	{
		node* mid=mid_ll(first,last);
		if(mid->data==d)
		{
			cout<<"found\n";
			return;
		}
		else if(mid->data>d)
		{
			last=mid;

		}
		else
		{
			first=mid->next;
		}
	}
	cout<<"not found\n";

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
	    a->next->next->next=new node(8);
	    a->next->next->next->next=new node(15);
	    a->next->next->next->next->next=new node(24);

	    display(a);

	    bs(a,24);
	    bs(a,9);
	    bs(a,0);

	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
