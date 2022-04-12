#include <stdio.h>
#include <time.h>
#include "kale_storage.h"
#include "processing_stages.h"

time_t t;   // Initialization, should only be called once.
struct Supplier {
   char name[25];
   float pricePerTon;
   int orderDuration;
};
//creates the following three companies to order from, will make a method to edit the time and price
struct Supplier sup1 = {"Aqukin Wholesale",10000.95,13};
struct Supplier sup2 = {"Cover Farming",8503.45,8};
struct Supplier sup3 = {"Myth Farms", 8599.80,4};

float stored = 1.0;
float hours_stored = 24.0;
//if the storage is below 1.25 it prompts user to make a request to make a new order
//supplier info will be stored in this file

void current_amount(){
    printf("Amount stored in Tonnes:%f\nDuration in Storage:%f\n",stored,hours_stored);
    if(stored < 1.25 || hours_stored > 48){
        printf("Reccomend new order is made!!\n\n\n");
    }
}

float current_amount_int(){
    return stored;
}

void supplier_info(){
    printf("\nSupplier 1: %s, tonnage price: %.2f$, Time until order fulfillment: %d Hours \n", sup1.name,sup1.pricePerTon,sup1.orderDuration);
    printf("\nSupplier 2: %s, tonnage price: %.2f$, Time until order fulfillment: %d Hours \n", sup2.name,sup2.pricePerTon,sup2.orderDuration);
    printf("\nSupplier 3: %s, tonnage price: %.2f$, Time until order fulfillment: %d Hours \n", sup3.name,sup3.pricePerTon,sup3.orderDuration);
}

void update_supInfo(int supplier, float pricing, int newDuration){
    if(supplier == 1){
       if(pricing != 0){
            sup1.pricePerTon = pricing;
        }
        if(newDuration != 0){
            sup1.orderDuration = newDuration;
        }
    }
    if(supplier == 2){
        if(pricing != 0){
            sup2.pricePerTon = pricing;
        }
        if(newDuration != 0){
            sup2.orderDuration = newDuration;
        }
    }
    if(supplier == 3){
        if(pricing != 0){
            sup3.pricePerTon = pricing;
        }
        if(newDuration != 0){
            sup3.orderDuration = newDuration;
        }
    }
    printf("Please Make a -suPs to verify changes, (%d)",newDuration);
}

void purchase_supply(){
    printf("Please Refer to the following for a order:\n");
    supplier_info();
    int m;
    printf("\nGive id for customer of choice, if one is equal I suggest you flip a coin: ");
    scanf("%d",&m);
    if(m == 1){
        printf("\nPurchase made from %s",sup1.name);
    }
    else if(m == 2){
         printf("\nPurchase made from %s",sup2.name);
    }
    else if(m == 3){
         printf("\nPurchase made from %s",sup3.name);
    }
    stored = 10;
    hours_stored = 0;
    printf("\nStorage now updated\n");
}
