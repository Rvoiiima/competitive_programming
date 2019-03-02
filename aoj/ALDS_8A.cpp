#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};


Node *NIL, *root;

void insert(int k) { //insert k
    Node *y = NIL;
    Node *x = root;

    Node *z = (Node *) malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while ( x!= NIL ) {
        y = x;
        if ( z->key < x->key ) {
            x = x->left;
        } else {
            x = x-> right;
        }
    }

    z->parent = y;

    if(y == NIL) {
        root = z;
    }else if(z->key < y->key) {
        y->left = z;
    }else {
        y->right = z;
    }
}

void inOrder(Node *u) {
    if( u == NIL ) return;
    inOrder(u->left);
    printf(" %d",u->key);
    inOrder(u->right);
}

void preOrder(Node *u) {
    if( u == NIL ) return;
    printf(" %d", u->key);
    preOrder(u->left);
    preOrder(u->right);
}

int main(void) {
    int k,n,i;
    string com;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++ ) {
        cin >> com;
        if ( com == "insert") {
            scanf("%d", &k);

            insert(k);
        }else if (com == "print") {
            inOrder(root);
            printf("\n");
            preOrder(root);
            printf("\n");
        }
    }
    return 0;
}


