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
node* mid_ll(node* ptr)
{
	if(ptr==NULL)
		return NULL;// never execute in this case
	node* s=ptr;
	node* f=ptr->next;
	while(f!=NULL && f->next!=NULL)
	{
		s=s->next;
		f=f->next->next;
	}
	return s;

}
node* merge(node*a,node*b)
{
	node*tmp=NULL;
	if(a==NULL && b!=NULL)
		return b;
	if(a!=NULL && b==NULL)
		return a;
	if(a==NULL && b==NULL)
		return NULL;
	if(a->data<b->data)
	{
		tmp=a;
		tmp->next=merge(a->next,b);
	}
	else
	{
		tmp=b;
		tmp->next=merge(a,b->next);
	}
	return tmp;

}
void mergeSort(node*&ptr)
{
	if(ptr!=NULL && ptr->next!=NULL)
	{
		node *mid = mid_ll(ptr);
		node* r=mid->next;
		mid->next=NULL;
		mergeSort(ptr);
		mergeSort(r);
		ptr=merge(ptr,r);
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
	    a=new node(5);
	    a->next=new node(2);
	    a->next->next=new node(1);
	    a->next->next->next=new node(8);
	    a->next->next->next->next=new node(5);
	    a->next->next->next->next->next=new node(4);

	    display(a);
	    mergeSort(a);
	    display(a);
	cout << "#@!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
