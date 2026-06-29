// this is a c code for a restaurent bill generator 
#include <stdio.h>

void main() {
    char name[50], phone[15], time[10], food[50];
    int ac,cashb ;
    float price;
 printf("Enter customer name: ");
    scanf("%s", &name);
 printf("Enter phone number: ");
    scanf("%s", &phone);
 printf("Enter time of food (e.g., 18:30): ");
    scanf("%s", &time);
 printf("Enter food item: ");
    scanf("%s", &food);
printf("Enter price of %s: ₹", food);
    scanf("%f", &price);
    printf ("ac room or not (press 1 if yes) (if not press zero) ");
    scanf("%d",&ac);
    if(ac==1) 
    { 
        printf("you will be charged extra for ac\n");
        price=price+100;}
    printf ("did the customer finish his food without any left overs yes =1 no =0\n");
    scanf("%d",&cashb);
    if (cashb==1){ printf("you have finished all of the food thank you you will get a cashback of 20 rupees\n");
    price=price-20;}
     printf("\n--- Bill ---\n");
    printf("HOTEL MARRIOT\n");
    printf("Name of the customer: %s\n", name);
    printf("Phone no: %s\n", phone);
    printf("Time of purchase : %s\n", time);
    printf("Food items : %s\n", food);
    printf("Total amount payble: ₹%f\n", price);
    printf("  Thank you \n  Visit again\n");
    printf("-----------\n");}

