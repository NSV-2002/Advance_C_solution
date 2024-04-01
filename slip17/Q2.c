#include <stdio.h>
#include <string.h>

void searchCity(char cities[][50], int n, char *search) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(cities[i], search) == 0) {
            printf("%s is found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%s not found\n", search);
    }
}

void findLongestCity(char cities[][50], int n) {
    int maxLength = 0;
    char longestCity[50];
    for (int i = 0; i < n; i++) {
        if (strlen(cities[i]) > maxLength) {
            maxLength = strlen(cities[i]);
            strcpy(longestCity, cities[i]);
        }
    }
    printf("Longest city name: %s\n", longestCity);
}

int main() {
    int n;
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    char cities[n][50];
    for (int i = 0; i < n; i++) {
        printf("Enter name of city %d: ", i + 1);
        scanf("%s", cities[i]);
    }
    char search[50];
    printf("\nEnter the city name to search: ");
    scanf("%s", search);
    searchCity(cities, n, search);
    findLongestCity(cities, n);

    return 0;
}
