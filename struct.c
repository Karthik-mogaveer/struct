#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1;
    s1.roll=10;
    s1.cgpa=90.1;
    // s1.name="karthik"; this is wrong method 
    strcpy(s1.name,"karthik");
    printf("the name of the student is %s\n",s1.name);
    printf("the roll no of the student is %d\n",s1.roll);
    printf("the cgpa of the student is %f\n",s1.cgpa);
    return 0;
}