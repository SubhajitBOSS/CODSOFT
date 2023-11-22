#include <iostream>
#include <string>

int main() {
    double totalGrade = 0.0, highestGrade = -1, lowestGrade = 101, grade;
    int studentCount = 0;

    char addMore;
    do {
        std::string name;

        std::cout << "Enter student name and grade: ";
        std::cin >> name >> grade;

        totalGrade += grade;
        highestGrade = std::max(highestGrade, grade);
        lowestGrade = std::min(lowestGrade, grade);
        studentCount++;

        std::cout << "Add another student? (y/n): ";
        std::cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');

    if (studentCount > 0) {
        double averageGrade = totalGrade / studentCount;

        std::cout << "\nAverage Grade: " << averageGrade << std::endl;
        std::cout << "Highest Grade: " << highestGrade << std::endl;
        std::cout << "Lowest Grade: " << lowestGrade << std::endl;
    } else {
        std::cout << "No student data available." << std::endl;
    }

    return 0;
}
