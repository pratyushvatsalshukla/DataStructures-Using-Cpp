#include<bits/bits/stdc++.h>
using namespace std ;

// There is no first or Last.

void DisplayList(Node *p){
    Node *HeadNode = p ;

    do{
    cout << p->Data ;
    p = p->NextNode ;
    }
    while(p!= HeadNode) ;
}
