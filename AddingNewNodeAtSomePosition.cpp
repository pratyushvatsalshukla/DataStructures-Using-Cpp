#include<bits/stdc++.h>
using namespace std ;

struct Node{

    int Data ;
    struct Node *NextNode ;

} *First = NULL;

void CreateNode(int A[], int ListLength){

    struct Node *LastNode, *ListNodes ;
    First = new Node ;
    First->Data = A[0] ;
    First->NextNode = NULL ;
    LastNode = First ;

    for(int i = 1 ; i < ListLength ; i++)
    {
        ListNodes = new Node ;
        ListNodes->Data = A[i] ;
        ListNodes->NextNode = NULL ;
        LastNode->NextNode = ListNodes ;
        LastNode = ListNodes ;
    }

}

void InsertionAtFront(struct Node *p){

    struct Node *NewFront = new Node ;
    cout << "Enter The Value You Want To Insert In The Front" << endl ;
    int NewVal ;
    cin >> NewVal ;
    NewFront->Data = NewVal ;
    NewFront->NextNode = First ;
    First = NewFront ;

}

void InsertionInBetween(struct Node *p, int pos){

    struct Node *NewMiddle = new Node ;
    cout << "Enter The Value You Want To Insert In The Front" << endl ;
    int NewVal ;
    cin >> NewVal ;
    NewMiddle->Data = NewVal ;
    for(int i = 0; i < pos-1 ; i++)
    {
        p = p->NextNode ;
    }

    NewMiddle->NextNode = p->NextNode ;
    p->NextNode = NewMiddle ;

}

void DislpayList(struct Node *p){
    cout << "New List Is : " ;
    while(p)
    {
        cout << p->Data << endl ;
        p = p->NextNode ;
    }
}
int main(){

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    CreateNode(A, 10) ;
    InsertionAtFront(First) ;
    DislpayList(First) ;
    InsertionInBetween(First, 6) ; // Here 6 is the Position where we want to insert. WRT 0
    DislpayList(First) ;
}
