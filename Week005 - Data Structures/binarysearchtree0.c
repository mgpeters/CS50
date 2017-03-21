// This is the example given of a binary search tree, usuing pointers in C

#include <stdio.h>
#include <cs50.h>

bool search (int n, node *tree){
    if (tree == NULL){
        return false;
    }
    else if (n < tree -> n){
        return search(n, tree -> left);
    }
    else if (n > tree -> n){
        return search (n,tree -> right);
    }
    else{
        return true;
    }
}