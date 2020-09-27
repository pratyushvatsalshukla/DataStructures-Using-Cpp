#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int Data ;
    struct Node *NextNode ;
} *First = NULL;

void CreateList(int A[], int ListLength){
    struct Node *LastNode, *ListNodes ;
    First = new Node ;
    First->Data = A[0] ;
    First->NextNode =  NULL ;
    LastNode = First ;

    for(int i = 1 ; i < ListLength ; i++)
    {
        ListNodes = new Node ;
        ListNodes->Data = A[i] ;
        ListNodes->NextNode = NULL ;
        LastNode->NextNode = ListNodes ;
        LastNode = ListNodes ;
    }
    LastNode->NextNode = First ; // Error May Occur
    ListNodes = LastNode ;       // Line 24, 25 for Making List Curcular
    cout << "List Creation Successful" ;

}

void DisplayCircularLinkedList(struct Node *p){
    do{
        cout << p->Data << endl ;
        p = p->NextNode ;
    }while(p != First ) ;
    if(p == First){
        cout << endl <<"P: Data :" << p->Data << " & First: Data =: "<<First->Data ;
    }

}

int main(){

    int A[] = {12, 323, 344, 3234, 2412, 2131, 123, 434, 454, 1234} ;
    CreateList(A, 10) ;
    DisplayCircularLinkedList(First) ;

}
