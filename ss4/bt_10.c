#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    struct SinhVien {
        int id;
        int age;
        char name[50];
    };

    struct SinhVien sv[5];
    for (int i = 0; i < 5; i++) {
        printf("id: ");
        scanf("%d", &sv[i].id);
        getchar();
        printf("name: ");
        fgets(sv[i].name, 50, stdin);
        sv[i].name[strlen(sv[i].name)-1] = '\0';
        printf("age: ");
        scanf("%d", &sv[i].age);
    }

    char searchName[50];
    printf("\nEnter name to search: ");
    getchar();
    fgets(searchName, 50, stdin);
    searchName[strlen(searchName)-1] = '\0';

    char searchLower[50];
    for (int i = 0; searchName[i]; i++) {
        searchLower[i] = tolower(searchName[i]);
    }
    searchLower[strlen(searchName)] = '\0';

    int found = 0;

    for (int i = 0; i < 5; i++) {
        char nameLower[50];
        for (int j = 0; sv[i].name[j]; j++) {
            nameLower[j] = tolower(sv[i].name[j]);
        }
        nameLower[strlen(sv[i].name)] = '\0';

        if (strstr(nameLower, searchLower) != NULL) {
            printf("ID: %d, Name: %s, Age: %d\n", sv[i].id, sv[i].name, sv[i].age);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with name containing '%s'\n", searchName);
    }

    return 0;
}