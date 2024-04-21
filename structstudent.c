#include<stdio.h>
#include<string.h>

struct student{
  int rollno;
  char name[10];
};

int main(){
  int i;
  struct student st[5];
  printf("Enter records of 5 students: \n");
  for(i=0;i<5;i++){
    printf("Enter rollno.: ");
    scanf("%d",&st[i].rollno);
    printf("Enter Name: ");
    scanf("%s",st[i].name);
    printf("----------\n");
  }
  printf("Student information list:\n");
  for (i=0;i<5;i++){
    printf("Rollno: %d\tName: %s\n",st[i].rollno,st[i].name);
  }
  return 0;
}
