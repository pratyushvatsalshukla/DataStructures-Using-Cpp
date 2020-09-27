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

int IsLoop(Node *First){
    Node *p, *q ;
    p = q = First ;

    do{
        p = p->NextNode ;
        q = q->NextNode ;
        q = q?q->NextNode:q ;
    }while(q &&q && p!=q) ;
    if(p == q){
        return 1 ;
    }
    else{
        return 0 ;
    }

}

int main(){
    struct Node *t1, *t2 ;
    int A[] = {10, 20, 30, 40, 50} ;
    CreateNode(A, 5) ;
    t1 = First->NextNode->NextNode ;
    t2 = First->NextNode->NextNode->NextNode->NextNode ;
    t2->NextNode = t1 ;
    cout << "0 if No LOOP and 1 if LOOP" << IsLoop(First) ;

}
