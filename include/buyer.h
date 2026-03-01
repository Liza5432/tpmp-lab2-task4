
#ifndef BUYER_H
#define BUYER_H

#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Date {
    int year;
    int month;
    int day;
}; 

struct Address {
    char postcode[50];
    char country[50];
    char region[50];
    char district[50];
    char city[50];
    char street[50];
    int house;
    int apartment;
}; 

struct Buyer {
    char surname[50];
    char name[50];
    char patronymic[50];
    char gender[50];
    char nationality[50];
    double height;
    double weight;
    struct Date birth; 
    char phone[50];
    char credit_card[50];
    char bank_account[50];
    struct Address addr; 
}; 


void Create(const char *filename, const char *data);
void Display(const char *filename);
void Find(const char *input, const char* output);

#endif
