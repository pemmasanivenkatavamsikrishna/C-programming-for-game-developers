#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};

int calculate_age(struct tm birthday, struct tm admission_date);

int main() {
    struct student s;
    printf("Enter name: ");
    fgets(s.name, 50, stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);
    printf("Enter birthday (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &s.birthday.tm_mday, &s.birthday.tm_mon, &s.birthday.tm_year);
    s.birthday.tm_year -= 1900; // years since 1900
    s.birthday.tm_mon -= 1; // month index starting from 0
    printf("Enter admission date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &s.admission_date.tm_mday, &s.admission_date.tm_mon, &s.admission_date.tm_year);
    s.admission_date.tm_year -= 1900; // years since 1900
    s.admission_date.tm_mon -= 1; // month index starting from 0

    int age = calculate_age(s.birthday, s.admission_date);

    printf("\nStudent Information:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Birthday: %02d/%02d/%d\n", s.birthday.tm_mday, s.birthday.tm_mon+1, s.birthday.tm_year+1900);
    printf("Admission Date: %02d/%02d/%d\n", s.admission_date.tm_mday, s.admission_date.tm_mon+1, s.admission_date.tm_year+1900);
    printf("Age at the time of admission: %d\n", age);
    
    return 0;
}

int calculate_age(struct tm birthday, struct tm admission_date) {
    int age = admission_date.tm_year - birthday.tm_year;
    if (admission_date.tm_mon < birthday.tm_mon ||
        (admission_date.tm_mon == birthday.tm_mon && admission_date.tm_mday < birthday.tm_mday)) {
        age--;
    }
    return age;
}

