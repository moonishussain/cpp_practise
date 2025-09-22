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
node* rev(node *ptr)
{
	if(ptr==NULL)
		return NULL;
	node*p1=NULL;
	node*p2=ptr;
	node*p3=p2->next;
	while(p2!=NULL)
	{
		p2->next=p1;
		p1=p2;
		p2=p3;
		if(p3!=NULL)
			p3=p3->next;
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
int carry=0;
node* sum(int a,int b,node*tmp)
{
	int sum=carry+a+b;
	carry=sum/10;
	sum=sum%10;
	node*t=new node(sum);
	t->next=tmp;
	return t;
}
node* add(node*a,node*b)
{
	node*tmp=NULL;
	while(a!=NULL && b!=NULL)
	{
		tmp=sum(a->data,b->data,tmp);
		a=a->next;
		b=b->next;
	}
	while(a!=NULL)
	{
		tmp=sum(a->data,0,tmp);
		a=a->next;
	}
	while(b!=NULL)
	{
		tmp=sum(0,b->data,tmp);
		b=b->next;
	}
	return tmp;
}
int main() {
	node *a;
	    a=new node(1);
	    a->next=new node(2);
	    a->next->next=new node(3);
	    a->next->next->next=new node(4);
	    node* ra=rev(a);
	    display(ra);

	    node *b;
	    b=new node(9);
	    b->next=new node(8);
	    b->next->next=new node(7);
	    //b->next->next->next=new node(4);
	    node* rb=rev(b);
	    display(rb);

	    node*res=add(ra,rb);
	    display(res);
	cout << "#!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
