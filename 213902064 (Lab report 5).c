#include <stdio.h>
#include <stdlib.h>

typedef struct bst{
   int data;
   struct bst * leftchildren;
   struct bst * rightchildren;
}bst;

bst * blank_bst();
void postorder(bst * root);
void preorder(bst * root);
void inorder(bst * root);

int main(){


   bst * root = blank_bst();


   bst * A = blank_bst();
   bst * B = blank_bst();
   bst * C = blank_bst();
   bst * D = blank_bst();
   bst * E = blank_bst();
   bst * F = blank_bst();
   bst * G = blank_bst();
   bst * H = blank_bst();

   root -> data = 45;
   A -> data = 25;
   B -> data = 55;
   C -> data = 15;
   D -> data = 35;
   E -> data = 65;
   F -> data = 5;
   G -> data = 77;
   H -> data = 88;

   //       1
   //    2     3
   //  4  5   6  7 
   // 8 9


   root -> leftchildren = A;
   root -> rightchildren = B;

   A -> leftchildren = C;
   A -> rightchildren = D;

   B -> rightchildren = E;

   C -> leftchildren = F;

   D -> leftchildren = G;
   D -> rightchildren = H;

   printf("preorder: ");
   preorder(root);


   printf("\n\n\npostorder: ");
   postorder(root);


   printf("\n\n\ninorder: ");
   inorder(root);
}

bst * blank_bst(){
   bst * blank_bst = (bst *) malloc(sizeof(bst *));
   blank_bst -> leftchildren = NULL;
   blank_bst -> rightchildren = NULL;
   return blank_bst;
}

void postorder(bst * root){
    if (root == NULL) {
      return;
    }

    postorder(root -> leftchildren);
    postorder(root -> rightchildren);
    printf("%d ", root -> data);
}


void preorder(bst * root){
    if (root == NULL) {
      return;
    }
    printf("%d ", root -> data);
    preorder(root -> leftchildren);
    preorder(root -> rightchildren);
}

void inorder(bst * root){
    if (root == NULL) {
      return;
    }
    printf("%d ", root -> data);
    inorder(root -> leftchildren);
    inorder(root -> rightchildren);
}