#include<bits/stdc++.h>
using namespace std ;

struct Node{
	int Data ;
	struct Node *Next ;
	
};

int main(){
	
	struct Node *p ;
//	p = (struct Node *) malloc(sizeof(struct Node)) ; C Programming
	
	p = new Node ;
	p->Data = 10 ;
	p->Next = 0 ;
	
}
