#include <stdio.h>
#include <time.h>
#include "kale_storage.h"
#include "processing_stages.h"

float stage1 = 0.0;
float stage2 = 0.0;
float stage3 = 0.0;
float stage4 = 0.0;
float stage5 = 0.0;
float stage6 = 0.0;
float stage7 = 0.0;
float stage8 = 0.0;
float stage9 = 0.0;
float stage10 = 0.0;

void amount_in_processing(){
    printf("Stage 1: %.2f\n",stage1);
    printf("Stage 2: %.2f\n",stage2);
    printf("Stage 3: %.2f\n",stage3);
    printf("Stage 4: %.2f\n",stage4);
    printf("Stage 5: %.2f\n",stage5);
    printf("Stage 6: %.2f\n",stage6);
    printf("Stage 7: %.2f\n",stage7);
    printf("Stage 8: %.2f\n",stage8);
    printf("Stage 9: %.2f\n",stage9);
    printf("Stage 10: %.2f\n",stage10);
}
void move_from_storage(float k){
    if(current_amount_int() - k >= 0){
       stage1 += k;
       stage10 += k;
       stage2 += k;
       stage3 += k;
       stage4 += k;
       stage5 += k;
       stage6 += k;
       stage7 += k;
       stage8 += k;
       stage9 += k;

       printf("Complete");
    }
    else{
        printf("Can't be that much we don't have enough");
    }

}

void move_to_sales(float k){
    if(current_amount_int() - k >= 0){
       stage1 -= k;
       stage10 -= k;
       stage2 -= k;
       stage3 -= k;
       stage4 -= k;
       stage5 -= k;
       stage6 -= k;
       stage7 -= k;
       stage8 -= k;
       stage9 -= k;
       printf("Complete");
    }
    else{
        printf("Can't be that much we don't have enough");
    }
}

void processing_period(){
    float time = 2.0;
    printf("Current time in processing: %.2f",time);
}
