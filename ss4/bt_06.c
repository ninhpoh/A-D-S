//
// Created by PC on 25/06/2025.
//
#include "./coment.h"
int main() {
    struct Svien {
        int id;
        int age;
        char name[50];
    };
    struct Svien svi[5];
    for (int i = 0; i < 5; i++) {
        printf("id: ");
        scanf("%d", &svi[i].id);
        getchar();
        printf("name: ");
        fgets(svi[i].name, 50, stdin);
        svi[i].name[strlen(svi[i].name)-1] = '\0';
        printf("age: ");
        scanf("%d", &svi[i].age);
    }
    int fvs;
    printf("nhap id sv muon tim: ");
    scanf("%d", &fvs);

    for (int i = 0; i < 5; i++) {
        if (svi[i].id == fvs) {
            printf("%s %d \n", svi[i].name, svi[i].age);
            return 0;
        }
    }
    printf("dasdsakhdg \n");
    return 0;
}