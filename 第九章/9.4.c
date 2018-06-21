#include <stdio.h>
struct student
{
    int num;
    char name[10];
    float score[3];
} stu[5];
void input(struct student s[]);
void print(struct student s[]);
int main()
{
    input(stu);
    print(stu);
    return 0;
}
void input(struct student s[])
{
    int i, j;
    for (i=0; i<5; i++){
        printf("Please enter No.%d student num, name, score: ", i+1);
        scanf("%d %s", &s[i].num, s[i].name);
        for (j=0; j<3; scanf("%f", &s[i].score[j++]));
    }
}
void print(struct student s[])
{
    int i, j;
    for (i=0; i<5; printf("\n"), i++){
        printf("%d %-10s ", s[i].num, s[i].name);
        for (j=0; j<3; printf("%.2f ", s[i].score[j++]));
    }
}

