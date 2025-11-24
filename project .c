#include<stdio.h>
#include<string.h>
 struct medicine{
 	int id;
 	char name[50];
 	int quantity;
 	char expiry[15];
 	float price;
 };
 struct supplier{
 	char name[50];
 };
 struct customer{
 	char name[50];
 };
 struct medicine med[100];
 int count=0;
 int login(){
 	char user[20],pass[20];
 	printf("\n==LOGIN==\n");
 	printf("username: ");
 	scanf("%s",user);
 	printf("password:");
 	scanf("%s",pass);
 	if(strcmp(user,"admin")==0 && strcmp(pass,"321")==0){
 		return 1 ;
	 }
 	
 	return 0;
 	
 }
 //add medicine
 void addmedicine(){
 	printf("\n Add medicine \n");
 	printf("Enter id:");
 	scanf("%d",&med[count].id);
 	printf("Enter Name :");
 	scanf("%s",med[count].name);
 	printf("Enter Quantity:");
 	scanf("%d",&med[count].quantity);
 	printf("Enter Expiry Date(DD-MM-YY):");
 	scanf("%s",med[count].expiry);
 	printf("Enter Price:");
 	scanf("%f",&med[count].price);
 	count++;
 	printf("Medicine added successfully  ");
 	
 }
 //view medicines
 void viewmedicine(){
 	printf("\n --Medicine list-- \n");
 	if(count==0){
 		printf("No medicines available.\n ");
 		return ;
	 }
	 int i;
	 for ( i=0; i<count; i++){
	 	printf("id:%d| name: %s |qty:%d |Exp: %s| price: %.2f",
		 med[i].id, med[i].name, med[i].quantity,med[i].expiry,med[i].price);
      if(med[i].quantity<5 )
      printf("LOW STOCK");
      printf("\n ");
      
	 }
 }
 // delete medicine 
 void deletemedicine() {
 	int id;
 	int i,j;
 	printf(" \n Enter id to delete :");
 	scanf("%d",&id);
 	for(i=0;i<count;i++){
 		if (med[i].id ==id){
 			for( j =i;j<count - 1;j++) 
 			med [j]=med[j+1];
 			count--;
 			printf("Medicine deleted.");
 			return ;
		 }
	 }
	 printf("Medicine not found.");
	 
 }
 
   //searchmedicine
   void searchmedicine(){
   	int id;
   	int i;
   	printf(" \n Enter id to search:");
   	scanf("%d",&id);
   	for(i=0;i<count;i++){
   		if(med[i].id==id){
		      			printf("Found:%s|qty:%d|exp:%s|price:%.2f",
		      			med[i].name,med[i].quantity,med[i].expiry,med[i].price);
		  return; 
		   }
	   }
   	printf("Not found.");
   	
   }
   //billing 
   void billing(){
   	int i, id,qty;
   	printf("\n --Billing--\n");
   	printf("Enter medicine id ");
   	scanf("%d",&id);
   	for(i=0;i<count;i++) {
   		if(med[i].id ==id) {
   			printf("Enter quantity: ");
   			scanf("%d",&qty);
   			if(qty>med[i].quantity ) {
   				printf("Not enough stock.");
   				return ;
   			}
   			float total =qty*med[i].price;
   			med[i].quantity -=qty;
   			printf("Total Bill: %.2f",total);
   			return ;
   		}
   	}
   	printf("Medicine not found.");
}
//main 
int main (){
	if(!login()) {
		printf("Login Failed! Exiting ");
		return 0;
	
	}

   				
  int choice;
  while (1){
  
  printf("\n Medical Store Menu\n");
  printf("1. Add Medicine\n ");
  printf("2. View Medicine \n");
  printf("3. Search Medicine \n");
   printf("4. Delete Medicine \n");
   printf("5. Billing \n");
   printf("6. Exit\n");
   printf("Enter Choice:");
   scanf("%d",&choice);
   switch(choice){
   	case 1: 
	   addmedicine();
   	break;
   	case 2:
	   viewmedicine();
   	break;
   	case 3:
   		searchmedicine();
   		break;
   	case 4:
	   deletemedicine();
	   break;
	   case 5:
	   billing ();
	   break;
	   case 6:
	   return 0;
	   default:printf("Invalid choice!");
     }	     
    }
   }
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	

 
 
 
 
 
 
 
