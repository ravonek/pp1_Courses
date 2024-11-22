#include <iostream>
#include <cmath> 
using namespace std;

double calculateGP(int total_score) {
    if (total_score < 50) return 0.0;
    return 1.0 + (total_score - 50) / 5 * (1.0 / 3.0);
}

int main() {
    int n;
    cin >> n;
    
    double totalGP = 0.0;
    int totalCredits = 0;
    
    for (int i = 0; i < n; i++) {
        int att1, att2, finals, credits;
        cin >> att1 >> att2 >> finals >> credits;
        
        int total_score = att1 + att2 + finals;
        
        if (att1 + att2 < 30 || finals < 20) {
            totalCredits += credits; 
            continue; 
        }
        
        double gp = calculateGP(total_score);
        totalGP += gp * credits;
        totalCredits += credits;
    }
    
    double gpa = totalGP / totalCredits;
    
    gpa = (gpa * 100000) / 100000;

    cout << gpa << endl; 
    return 0;
}