#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototypes
double calculateAggregate(double matObt, double matTot, double intObt, double intTot, double etObt, double etTot);
string getCategory(double aggregate);
bool isEligible(double aggregate);
void displayReport(double matObt, double matTot, double intObt, double intTot, double etObt, double etTot);

int main() {
    double matricObtained, matricTotal;
    double interObtained, interTotal;
    double entryTestObtained, entryTestTotal;

    // 1. Input total and obtained marks for all three examinations
    cout << "=========================================\n";
    cout << "      UNIVERSITY ADMISSION SYSTEM        \n";
    cout << "=========================================\n\n";

    cout << "Enter Matric Obtained and Total Marks: ";
    cin >> matricObtained >> matricTotal;

    cout << "Enter Intermediate Obtained and Total Marks: ";
    cin >> interObtained >> interTotal;

    cout << "Enter Entry Test Obtained and Total Marks: ";
    cin >> entryTestObtained >> entryTestTotal;

    // 5. Display a complete admission report
    displayReport(matricObtained, matricTotal, interObtained, interTotal, entryTestObtained, entryTestTotal);

    return 0;
}

// 2. Calculate the aggregate percentage using a separate function
double calculateAggregate(double matObt, double matTot, double intObt, double intTot, double etObt, double etTot) {
    double matricPercentage = (matObt / matTot) * 100;
    double interPercentage = (intObt / intTot) * 100;
    double etPercentage = (etObt / etTot) * 100;

    // Apply weights: 30% Matric, 40% Intermediate, 30% Entry Test
    double aggregate = (matricPercentage * 0.30) + (interPercentage * 0.40) + (etPercentage * 0.30);
    return aggregate;
}

// 3. Determine the admission category
string getCategory(double aggregate) {
    if (aggregate >= 90.0) {
        return "Excellent";
    } else if (aggregate >= 80.0) {
        return "Very Good";
    } else if (aggregate >= 70.0) {
        return "Good";
    } else {
        return "Not Eligible";
    }
}

// 4. Determine whether the student qualifies for a scholarship (aggregate 85 or above)
bool isEligible(double aggregate) {
    return aggregate >= 85.0;
}

// 5. Display a complete admission report
void displayReport(double matObt, double matTot, double intObt, double intTot, double etObt, double etTot) {
    double aggregate = calculateAggregate(matObt, matTot, intObt, intTot, etObt, etTot);
    string category = getCategory(aggregate);
    bool scholarship = isEligible(aggregate);

    cout << "\n=========================================\n";
    cout << "             ADMISSION REPORT            \n";
    cout << "=========================================\n";
    
    // Set output formatting to 2 decimal places
    cout << fixed << setprecision(2);
    
    cout << "Matric Marks:        " << matObt << " / " << matTot << "\n";
    cout << "Intermediate Marks:  " << intObt << " / " << intTot << "\n";
    cout << "Entry Test Marks:    " << etObt << " / " << etTot << "\n";
    cout << "-----------------------------------------\n";
    cout << "Final Aggregate:     " << aggregate << "%\n";
    cout << "Admission Status:    " << category << "\n";
    
    cout << "Scholarship Status:  ";
    if (scholarship) {
        cout << "Congratulations! You qualify for a scholarship.\n";
    } else {
        cout << "Not eligible for a scholarship.\n";
    }
    cout << "=========================================\n";




return 0;

}
