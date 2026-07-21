#include <stdio.h>
//to create sort students in decreasing order of their cgpa using structures.

struct student{
        int roll;
        char name[50];
        char dept[10];
        float cgpa;
};

int main(){
    int n;
    printf("enter number of records:");
    scanf("%d",&n);
    struct student stu[n];
    for (int i=0;i<n;i++){
        printf("ROLL NUMBER: ");
        scanf(" %d", &stu[i].roll); 
        printf("NAME: ");
        scanf("%s",stu[i].name);
        printf("DEPT: ");
        scanf("%s",stu[i].dept);
        printf("CGPA: ");
        scanf(" %f", &stu[i].cgpa);
        printf("\n");
    }

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (stu[j].cgpa<stu[j+1].cgpa){
                struct student first=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=first;
            }
        }
    }

    printf("\n--- STUDENT LIST ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d \t %s \t %s \t %.2f\n", stu[i].roll, stu[i].name, stu[i].dept, stu[i].cgpa);
    }
}