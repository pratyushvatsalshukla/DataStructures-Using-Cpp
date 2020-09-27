#include<bits/stdc++.h>
using namespace std ;

struct Node{

    int Data ;
    struct Node *NextNode ;

} *first = NULL ;

void CreateNodes(int A[], int ListLength)
{
    struct Node *LastNode, *ListNodes ;
    first = new Node ;
    first->Data = A[0] ;
    first->NextNode = NULL ;
    LastNode = first ;

    for(int i = 1; i < ListLength ; i++)
    {
        ListNodes = new Node ;
        ListNodes->Data = A[i] ;
        ListNodes->NextNode = NULL ;
        LastNode->NextNode = ListNodes ;
        LastNode = ListNodes ;
    }
}

void Maximum(struct Node *p){
    int Max = 0 ;
    //p = p->NextNode ;
    while(p != NULL)
    {
        if(Max < p->Data)
        {
            Max = p->Data ;
        }
        p = p->NextNode ;
    }
    cout << "Maximum Value Of Node Is : " << Max ;

}

int main(){
    int A[] = {1, 256, 53, 34, 50, 6, 937, 8, 9, 10} ;
    CreateNodes(A, 10) ;
    Maximum(first) ;


}
