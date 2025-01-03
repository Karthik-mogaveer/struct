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
    s1.cgpa=9.1;
    // s1.name="karthik"; this is wrong method 
    strcpy(s1.name,"karthik");
    printf("the name of the student is %s\n",s1.name);
    printf("the roll no of the student is %d\n",s1.roll);
    printf("the cgpa of the student is %f\n",s1.cgpa);

    struct student s2;
    s2.roll=11;
    s2.cgpa=8.9;
    strcpy(s2.name,"pradeep");
    printf("the name of the student is %s\n",s2.name);
    printf("the roll no of the student is %d\n",s2.roll);
    printf("the cgpa of the student is %f\n",s2.cgpa);


    
    return 0;
}
