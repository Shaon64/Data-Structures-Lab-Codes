#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

typedef struct singly_linked_list{
   int data;
   struct singly_linked_list * next;
} singly;

singly * blank_singly();
singly * sample_singly();
void display_singly(singly * listing);

singly * insert_el_beginning(singly * listing, int data);
singly * insert_el_end(singly * listing, int data);
singly * insert_el_position(singly * listing, int position, int data);

int find_node(singly * listing, int findData);

int main(){

   singly * listing = NULL;
   listing = sample_singly();
   // listing = insert_el_end(listing, 32);
   // listing = insert_el_position(listing, 2, 876);
   // listing = insert_el_beginning(listing, 999);
   // printf("%d", find_node(listing, 222));
   // display_singly(listing);
   while(404){
      printf(
         "--------------------\n"
         " Menu \n"
         "--------------------\n\n"
      );

      printf("\t#- for testing purposes, sample data will be added\n");

      printf(
         "\t1. insert at beginning\n"
         "\t2. insert at end\n"
         "\t3. insert at specific position\n"
         "\t4. node exist or not?\n"
         "\t5. display list\n"
         "\t6. exit\n\n"
      );

      printf("@: ");
      int option;
      scanf("%d", &option);

      int data;
      int position;

      if(option == 1){
         printf("give data: ");
         scanf("%d", &data);
         listing = insert_el_beginning(listing, data);
      }else if(option == 2){
         printf("give data: ");
         scanf("%d", &data);
         listing = insert_el_end(listing, data);
      }else if(option == 3){
         printf("give position: ");
         scanf("%d", &position);
         printf("give data: ");
         scanf("%d", &data);
         listing = insert_el_position(listing, position, data);
      }else if(option == 4){
         printf("find node with data: ");
         scanf("%d", &data);
         if(find_node(listing, data)){
            printf("the node with this data exist\n");
         }else{
            printf("the node with this data not exist in this world\n");
         }
      }else if(option == 5){
         display_singly(listing);
      }else if(option == 6){
         printf("exit with respect\n");
         exit(0);
      }   

      getch();
      system("cls");
   }
   

   return 0;
}

singly * insert_el_beginning(singly * listing, int data){
   singly * item = blank_singly();
   item -> data = data;
   item -> next = listing;
   return item;
}

singly * insert_el_position(singly * listing, int position, int data){
   singly * item = blank_singly();
   item -> data = data;
   item -> next = NULL;

   singly * temp = blank_singly();
   temp = listing;

   singly * temp1 = blank_singly();

   int pompom = 0;
   while(temp != NULL){
      if(pompom == position){
         temp1 = temp -> next;
         item -> next = temp1;
         temp -> next = item;
      }
      pompom++;
      temp = temp -> next;
   }

   return listing;
}

singly * insert_el_end(singly * listing, int data){
   singly * item = blank_singly();
   item -> data = data;
   item -> next = NULL;

   singly * temp = blank_singly();
   temp = listing;

   singly * temp1 = blank_singly();
   // temp1 = temp;

   int pompom = 0;
   while(temp != NULL){
      if(temp -> next == NULL){
         temp -> next = item;
         break;
      }
      temp = temp -> next;
   }
   // temp -> next = item;
   // listing = temp1;

   return listing;
}

singly * sample_singly(){
   singly * listing = NULL;

   singly * listin1 = blank_singly();
   listin1 -> data = 111;

   singly * listin2 = blank_singly();
   listin2 -> data = 222;

   singly * listin3 = blank_singly();
   listin3 -> data = 333;

   singly * listin4 = blank_singly();
   listin4 -> data = 444;

   listin1 -> next = listin2;
   listin2 -> next = listin3;
   listin3 -> next = listin4;
   listin4 -> next = NULL;
   listing = listin1;

   return listing;
}

int find_node(singly * listing, int findData){
   singly * temp = blank_singly();
   temp = listing;

   while(temp != NULL){
      if(temp -> data == findData){
         return 1;
      }
      temp = temp -> next;
   }
   return 0;
}

void display_singly(singly * listing){
   singly * temp = blank_singly();
   temp = listing;

   int pompom = 0;
   while(temp != NULL){
      printf("data %d: %d\n", pompom++, temp -> data);
      temp = temp -> next;
   }
}

singly * blank_singly(){
   singly * blank = (singly *) malloc(sizeof(singly *));
   return blank;
}