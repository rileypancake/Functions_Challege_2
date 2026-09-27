#include <iostream>
#include <limits>

using namespace std;

// Function Prototypes
void inputGrades(double& g1, double& g2, double& g3);
double calculateAverage(const double g1, const double g2, const double g3);
char getLetterGrade(const double average);

int main()
{
    double grade1 = 0;
    double grade2 = 0;
    double grade3 = 0;
    int choice = 0;

    do
    {
        cout << "\nStudent Grade Manager\n";
        cout << "1. Input Grades\n";
        cout << "2. Calculate and Display Average\n";
        cout << "3. Assign and Display Letter Grade\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";

        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice.\n";
            continue;
        }

        switch (choice)
        {
            case 1:
                inputGrades(grade1, grade2, grade3);
                break;

            case 2:
            {
                double average = calculateAverage(grade1, grade2, grade3);
                cout << "Average: " << average << endl;
                break;
            }

            case 3:
            {
                double average = calculateAverage(grade1, grade2, grade3);
                char letter = getLetterGrade(average);

                cout << "Average: " << average << endl;
                cout << "Letter Grade: " << letter << endl;

                break;
            }

            case 4:
                cout << "Goodbye!\n";
                break;

            default:
                cout << "Please enter 1, 2, 3, or 4.\n";
        }

    } while (choice != 4);

    return 0;
}


// Input three grades
void inputGrades(double& g1, double& g2, double& g3)
{
    do
    {
        cout << "Enter grade 1 (0-100): ";
        cin >> g1;

        if (cin.fail() || g1 < 0 || g1 > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid grade.\n";
        }
        else
        {
            break;
        }

    } while (true);


    do
    {
        cout << "Enter grade 2 (0-100): ";
        cin >> g2;

        if (cin.fail() || g2 < 0 || g2 > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid grade.\n";
        }
        else
        {
            break;
        }

    } while (true);


    do
    {
        cout << "Enter grade 3 (0-100): ";
        cin >> g3;

        if (cin.fail() || g3 < 0 || g3 > 100)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid grade.\n";
        }
        else
        {
            break;
        }

    } while (true);
}


// Calculate average
double calculateAverage(const double g1, const double g2, const double g3)
{
    return (g1 + g2 + g3) / 3.0;
}


// Determine letter grade1
char getLetterGrade(const double average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}