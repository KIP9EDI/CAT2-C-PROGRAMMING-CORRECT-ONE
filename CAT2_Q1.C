//Edison Chepkwony

#include<stdio.h>

struct employee {
    char name[25];  
    int ID;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    struct employee Emp = {
       "Jonh Doe",          // Name
       Emp.ID=67890,        // ID
    "Human Resources",     // Department
    Emp.salary=55000.50,   // Salary
        "jonh.doe@company.com"   // Email
    };

    // Print the values of the fields
    printf("Employee Details:\n");
    printf("Name: %s\n", Emp.name);
    printf("ID: %d\n", Emp.ID);                
    printf("Dept: %s\n", Emp.department);
    printf("Salary: %.2f\n", Emp.salary);
    printf("Email: %s\n", Emp.email);

    return 0;
}