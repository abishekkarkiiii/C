#include<stdio.h>

//making a structure
struct rec {
    float amount;
    char name[50];
    char address[100];
    char phoneNumber[12];
};

FILE *ptr;

void forRecords(int n) {
    ptr = fopen("record.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file\n");
        return;
    }
    
    // recording a num for reading in future
    fprintf(ptr, "%d\n", n);	
    
    //calling a structure
    struct rec s1[n];
    int i;
    
    for(i = 0; i < n; i++) {
        printf("enter a name of customer: ");
        scanf("%s", s1[i].name);
        printf("enter an amount: ");
        scanf("%f", &s1[i].amount);
        printf("enter an address of customer: ");
        scanf("%s", s1[i].address);
        printf("enter a phone number: ");
        scanf("%s", s1[i].phoneNumber);
        fprintf(ptr, "%s\n%.2f\n%s\n%s\n", s1[i].name, s1[i].amount, s1[i].address, s1[i].phoneNumber);
    }
    
    printf("Successfully recorded the records\n ");
    fclose(ptr);
}

// read data
void ReadData() {
    int num;
    ptr = fopen("record.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file\n");
        return;
    }
    
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    ptr = fopen("record.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file\n");
        return;
    }
    
    //calling a value
    typedef struct RecordValueStore {
        float amount;
        char name[50];
        char address[100];
        char phoneNumber[12];
    } ValueStore;

    ValueStore s1[num];
    int i;
    
    for(i = 0; i < num; i++) {
        fscanf(ptr, "%s%f%s%s", s1[i].name, &s1[i].amount, s1[i].address, s1[i].phoneNumber);
        printf("name: %s\nAmount: %.2f\nAddress: %s\nPhoneNumber: %s\n", s1[i].name, s1[i].amount, s1[i].address, s1[i].phoneNumber);
    }
    
    fclose(ptr);
}

int main() {
    int choice;
    printf("Enter 1 to record data or 2 to read data: ");
    scanf("%d", &choice);
    int n;
    
    switch(choice) {
        case 1:
            printf("Enter the total number of records you want to record: ");
            scanf("%d", &n);
            forRecords(n);
            break;
        case 2:
            ReadData();
            break;
        default: 
            printf("Sorry, option not available.\n");	
    }
    
    return 0;	
}

