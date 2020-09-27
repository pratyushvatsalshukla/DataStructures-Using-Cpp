#include<bits/stdc++.h>
using namespace std ;

struct Node{

    int Data ;
    struct Node *NextNode ;

} *First = NULL;

void CreateNode(int A[], int ListLength)
{
    struct Node *LastNode, *ListNodes ;
    First = new Node ;
    First->Data = A[0] ;
    First->NextNode = NULL ;
    LastNode = First ;

    for(int i = 1; i < ListLength ; i++)
    {
        ListNodes = new Node ;
        ListNodes->Data = A[i] ;
        ListNodes->NextNode = NULL ;
        LastNode->NextNode = ListNodes ;
        LastNode = ListNodes ;
    }

}

void DeleteNode(Node *p, int DelPos){
    int DelNodeVal ;
    if(DelPos <= 0)
    {
        return ;
    }
    else{
        for(int i = 0 ; i < DelPos-1 ; i++)
        {
            p = p->NextNode ;
        }
        Node *q = p ;
        p = p->NextNode ;
        q->NextNode = p->NextNode ;
        int DelNodeVal = p->Data ;
        delete p ;
    }


}

void DisplayList(struct Node *p){
    cout << "The Linked List is : " ;
    while(p)
    {
        cout << endl << p->Data  ;
        p = p->NextNode ;
    }

}

int main(){

    int A[] = {14, 24, 43, 44, 54, 62, 75, 82, 29, 10} ;
    CreateNode(A, 10) ;
    DisplayList(First) ;
    DeleteNode(First, 6) ;
    cout << "After DELETION" <<endl ;
    DisplayList(First) ;

}
