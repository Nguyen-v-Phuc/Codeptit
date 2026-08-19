#include <stdio.h>
#include <string.h>
int i;

typedef struct
{
    char id[50];
    char name[50];
    float score;
} Student;

void print_all(Student s[], int n)
{
    printf("\ndanh sach sinh vien:\n");

    for (i = 0; i < n; i++) {
        printf("%s %s %.2f\n", s[i].id, s[i].name, s[i].score);
    }
}

float average(Student s[], int n)
{
    float sum = 0;

    for (i = 0; i < n; i++) {
        sum += s[i].score;
    }

    return sum / n;
}

void highest(Student s[], int n)
{
    int max_index = 0;

    for (i = 1; i < n; i++) {
        if (s[i].score > s[max_index].score) {
            max_index = i;
        }
    }

    printf("\nsinh vien diem cao nhat:\n");
    printf("%s %s %.2f\n", s[max_index].id, s[max_index].name, s[max_index].score);
}

int pass(Student s[], int n)
{
    int count = 0;

    for (i = 0; i < n; i++) {
        if (s[i].score >= 5) {
            count++;
        }
    }

    return count;
}

int failed(Student s[], int n)
{
    int count = 0;

    for (i = 0; i < n; i++) {
        if (s[i].score < 5) {
            count++;
        }
    }

    return count;
}

void print_pass(Student s[], int n)
{
    printf("\nsinh vien dat:\n");

    for (i = 0; i < n; i++) {
        if (s[i].score >= 5) {
            printf("%s %s %.2f\n", s[i].id, s[i].name, s[i].score);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 100) return 0;

    Student s[100];

    for (i = 0; i < n; i++) {
        scanf("%s", s[i].id);
       
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        
        scanf("%f", &s[i].score);
    }

    print_all(s, n);
    
    printf("\ndiem trung binh lop: %.2f\n", average(s, n));

    highest(s, n);

    printf("\nso sinh vien dat: %d\n", pass(s, n));

    printf("so sinh vien khong dat: %d\n", failed(s, n));

    print_pass(s, n);

    return 0;
}
