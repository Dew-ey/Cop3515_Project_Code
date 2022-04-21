#include <stdio.h>
#include <stdlib.h>

/*******************************************************
    THIS FILE WILL CREATE THE salesLog.txt file and will
    append doughnut sales to it
/*******************************************************/
struct Doughnut{
    char name[30];
    int salesBySingle;
    int salesByDozen;
};
struct Doughnut dont1 = {"Bavarian Kreme",0,0};
struct Doughnut dont2 = {"Chocolate Frosted with Sprinkles",0,0};
struct Doughnut dont3 = {"Strawberry Frosted with Sprinkles",0,0};
struct Doughnut dont4 = {"Brownie Batter",0,0};
struct Doughnut dont5 = {"Vanilla Frosted with Sprinkles",0,0};
struct Doughnut dont6 = {"Blueberry Cake",0,0};
struct Doughnut dont7 = {"Jelly",0,0};
struct Doughnut dont8 = {"Old-Fashioned",0,0};
void updateSales(){
    int id;
    printf("Which Donut is being sold input an int 1-8: ");
    scanf("%d%*c",&id);
    char c;
    switch(id){
        case 1:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont1.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont1.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 2:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont2.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont2.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 3:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont3.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont3.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 4:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont4.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont4.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 5:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont5.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont5.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 6:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont6.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont6.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 7:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont7.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont7.salesByDozen++;
                dateSaleUpdate();
                break;
            }
        case 8:
            printf("Is the sale by single or dozen s for single d for dozen: \n");
            if((c = getchar())=='s'){
               dont8.salesBySingle++;
               dateSaleUpdate();
               break;

            }
            else if((c = getchar())=='d'){
                dont8.salesByDozen++;
                dateSaleUpdate();
                break;
            }
    }

}
void dateSaleUpdate(){
    FILE *f;
    f = fopen("salesLog.txt","a+");
    char date[11];
    printf("Input Sale Date: ");
    scanf("%10s",&date);
    fprintf(f, "Date of Sale: %s\n",date);
    fclose(f);
}

void printInfo(){
    int id;
    printf("input the ID of the item to see its info: ");
    scanf("%d%*c",&id);
    switch(id){
        case 1:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont1.name,dont1.salesBySingle,dont1.salesByDozen);
            break;
        case 2:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont2.name,dont2.salesBySingle,dont2.salesByDozen);
            break;
        case 3:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont3.name,dont3.salesBySingle,dont3.salesByDozen);
            break;
        case 4:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont4.name,dont4.salesBySingle,dont4.salesByDozen);
            break;
        case 5:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont5.name,dont5.salesBySingle,dont5.salesByDozen);
            break;
        case 6:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont6.name,dont6.salesBySingle,dont6.salesByDozen);
            break;
        case 7:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont7.name,dont7.salesBySingle,dont7.salesByDozen);
            break;
        case 8:
            printf("%s\nSingle Sales: %d\nDozen Sales: %d",dont8.name,dont8.salesBySingle,dont8.salesByDozen);
            break;
    }
}

