#include<bits/stdc++.h>
using namespace std ;

struct Node
{
    int Data ;
    struct Node *NextNode ;
}*first=NULL;

void Create(int A[], int n){
    int i ;
    struct Node *t, *LastNode ;
    first = new Node ;
    first->Data = A[0] ;
    first->NextNode = NULL ;
    LastNode = first ;

    // cout << LastNode->NextNode << endl << first->Data << endl ;

    for(int i = 1 ; i < n ; i++){
        t = new Node ;
        t->Data = A[i] ;
        t->NextNode = NULL ;
        LastNode->NextNode = t ;
        LastNode = t ;

    }
}

void Display(struct Node *p){

    while(p)
    {
        cout << p->Data ;
        p = p->NextNode ;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15} ;
    Create(A,5) ;
    Display(first) ;
}
