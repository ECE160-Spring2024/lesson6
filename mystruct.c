#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct birthCert {
    char* name;
    struct date birthday;
};

int main() {

    struct date ajbday;
    ajbday.month = 4;
    ajbday.day = 14;
    ajbday.year = 2005;
    struct birthCert aj = {"AJ"};
    aj.birthday = ajbday;

    printf("%s %d/%d/%d", aj.name, aj.birthday.month, aj.birthday.day, aj.birthday.year);

    struct birthCert* bcp = &aj;

    printf("%s %d/%d/%d", bcp->name, bcp->birthday.month, bcp->birthday.day, bcp->birthday.year);


    return 0;
}
