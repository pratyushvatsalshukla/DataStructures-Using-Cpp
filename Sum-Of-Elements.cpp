#include<bits/stdc++.h>
using namespace std ;

struct Node{
    int Data ;
    struct Node *NextNode ;

}*first = NULL;

void CreateNodes(int A[], int ListLength)
{

    struct Node *LastNode, *ListNodes ;
    first = new Node ;
    first->Data = A[0] ;
    first->NextNode = NULL ;
    LastNode = first ;

    for( int i = 1 ; i < ListLength ; i++)
    {
        ListNodes = new Node ;
        ListNodes->Data = A[i] ;
        ListNodes->NextNode = NULL ;
        LastNode->NextNode = ListNodes ;
        LastNode = ListNodes ;
    }
}

void Summation(struct Node *p){
    int Sum = 0 ;
    while(p)
    {
        Sum = Sum + p->Data ;
        p = p->NextNode ;
    }
    cout << "SUM IS : " << Sum ;
}

int main(){
    int arr[] = {1, 2, 3,4, 5, 6, 7, 8, 9, 10} ;
    CreateNodes(arr, 10) ;
    Summation(first) ;

}
