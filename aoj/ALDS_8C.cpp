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

Node *find(Node *u, int k) {
    while (u!= NIL && k != u->key) {
        if ( k < u->key ) {
            u = u->left;
        }else {
            u = u->right;
        }
    }
    return u;
}

Node *Minimum(Node *x) {
    while ( x->left != NIL ) x = x->left;
    return x;
}

Node *Successor(Node *x) {
    if ( x->right != NIL ) return Minimum(x->right);

    Node *y = x->parent;
    while ( y != NIL && x == y->right ) {
        x = y;
        y = y->parent;
    } //親をたどって行って、最初に見つけた左の子がxに入ると止まる

    return y;
}

void Delete(Node *z) {
    Node *x;
    Node *y;

    if ( z->left == NIL || z->right == NIL ) {
        y = z;
    } else { 
        y = Successor(z);
    }

    if (y->left != NIL) {
        x = y->left;
    }else {
        x = y->right;
    }

    if ( x != NIL ) x->parent = y->parent;

    if ( y->parent == NIL ) {
        root = x;
    } else {
        if ( y == y->parent->left) {
            y->parent->left = x;
        } else {
            y->parent->right = x;
        }
    }

    if ( y != z ) {
        z->key = y->key;
    }
    free (y);
}

int main(void) {
    int k,n,i;
    Node *a;
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
        }else if (com == "find") {
            scanf("%d", &k);
            a = find(root, k);
            if (a != NIL) printf("%s","yes\n");
            else printf("%s","no\n");
        }else if (com == "delete"){ 
            scanf("%d", &k);
            delete(find(root, k));
        }
    }
    return 0;
}


