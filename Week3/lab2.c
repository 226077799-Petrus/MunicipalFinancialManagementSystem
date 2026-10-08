#include <stdio.h>
int main(){

  double price[10];
  double budget=5000.00;
  char name[10][50];
  int qualified[10];
  int registration=0;
  int documents=0;
  int high=num[]

   for (int i=0; i<10; i++){
  //ask for name
  printf("Enter user name: ");
  scanf("%49s",&name[i]);
  //ask for registration
  printf("Is the client registeration (1=Yes, 0=No): ");
  scanf("%d", &registration[i]);
  //ask for documents
  printf("Are the documents valid(1=yes, 0=no):");
  scanf("%d",&documents[i]);
  //ask supplier price
  printf("what is the price of the suppler: ");
  scanf("%lf", &price[i]);
   }
  if(registration==0 && documents==0 && price <= budget){
     printf("Qualified");
  } else{
    printf("not Qaualified");
  }
  if(num[i]>high){

  }
}