#ifndef KALE_STORAGE_H_INCLUDED
#define KALE_STORAGE_H_INCLUDED


float current_amount_int(); //gets current amount of storage and time
void current_amount();
void supplier_info(); //gets supplier info
void update_supInfo(int supplier, float pricing, int newDuration);
void purchase_supply();
#endif // KALE_STORAGE_H_INCLUDED
