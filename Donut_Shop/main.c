#include <stdio.h>
#include <stdlib.h>
#include "kale_storage.h"
#include "processing_stages.h"
/******************************************
* MAIN WILL INCLUE AREA WHERE RESUESTS ARE*
* MADE POSSIBLY WILL INCLUDE A -h for a   *
* COMMAND LIST, HOWEVER IT WILL BE STEP AT*
* A TIME; Riley Greenstein, dewey#2067    */

/** SUPPLIER INFORMATION KEPT ON THE kale_storage file can be acessed via commands here use -h on run for a list*/

int main()
{
   /** THIS FOLLOWING SECTION IS NOT SHOWN ON EXECUTION SETS UP COUSTOMER INFORMATION **/

   printf("Current Funcationialty: Storage\n\n******************************************\n");
   while(1){
        printf("\n\n\nWhat operation would you like to select (Type -h for a list of commands):");
        char str1[10] = "";
        scanf("%9s",str1);
        if(strcmp(str1,"-h")==0){ //if statement here gives list of command options on a -h request is reccomened to run on first launch
                printf("Current commands are:\n-h (help)\n-STR (storage)\n-suPs Gives Info on all suppliers\n-uComp Update Supplier info\n-puch Initiates new order squence\n-e to exit\n");
                printf("-prCs: Current amount in processing\n-mFs: Move from storage\n-mFp: Move from processing\n-pTime: Check processing Times\n");

        }
        else if(strcmp(str1,"-STR")==0){ //STORAGE AMOUNT CHECK
                current_amount();
        }
        else if(strcmp(str1,"-e")==0){ //EXIT CASE
                break;
        }
        else if(strcmp(str1,"-suPs")==0){ //SUPPLIER INFORMATION
            supplier_info();
        }
        else if(strcmp(str1,"-uComp")==0){ //Supplier Information change method
            int i,k = 0;
            float j = 0;
            printf("\n\nGive new information by first giving company number (int from 1-3),\nsecondly give updated pricing,\nfinally give new duration period\n(note 0 will not be passed):");
            scanf("%d %f %d",&i,&j,&k);
            update_supInfo(i,j,k); //i,j,k pass the supplier id, the new float pricing, finally new order duration
        }
        else if(strcmp(str1,"-puch")==0){ //begins the purchase operation
            purchase_supply();
        }
        else if(strcmp(str1,"-prCs")==0){
            amount_in_processing();
        }
        else if(strcmp(str1,"-mFs")==0){
            printf("%f",current_amount_int());
            printf("How much will be moved from storage to stages: ");
            float j = 0;
            scanf("%f",&j);
            move_from_storage(j);
        }
        else if(strcmp(str1,"-mFp")==0){
            printf("%f",current_amount_int());
            printf("How much will be moved from stages to sales: ");
            float j = 0;
            scanf("%f",&j);
            move_to_sales(j);
        }
        else if(strcmp(str1,"-pTime")==0){
            processing_period();
        }
        else{
                printf("Please use -h to look for a valid command\n ");
        }
    }
}
