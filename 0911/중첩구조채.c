#include<stdio.h>

struct Date{
  int year;
  int month;
  int day;
};

struct Student{
  char name[20];
  int id;
  struct Date birth;
  
};

int main(void){
  
  struct Student S ={"지혜", 1217, {2000, 2, 24}};
  return 0;
}