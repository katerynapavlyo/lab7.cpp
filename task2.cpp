#include <iostream>
#include <vector>

using namespace std;

// Structure to represent a line in the form Ax + By + C = 0
struct Line {
    double A;
    double B;
    double C;
};

// Function to check if two lines are parallel
bool isParallel(const Line& l1, const Line& l2) {
    // Two lines are parallel if A1 * B2 - A2 * B1 == 0
    return (l1.A * l2.B - l2.A * l1.B) == 0;
}

int main() {
    int n;
    cout << "Enter the number of lines n: ";
    cin >> n;

    if (n < 2) {
        cout << "At least 2 lines are required to find pairs!" << endl;
        return 0;
    }

    vector<Line> lines(n);

    // Reading line coefficients
    cout << "Enter coefficients A, B, C for each line:\n";
    for (int i = 0; i < n; i++) {
        cout << "Line " << i + 1 << " (A B C): ";
        cin >> lines[i].A >> lines[i].B >> lines[i].C;
    }

    int parallelPairsCount = 0;

    // Iterate through all unique pairs of lines (i and j, where j > i)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isParallel(lines[i], lines[j])) {
                parallelPairsCount++;
                cout << "Line " << i + 1 << " is parallel to line " << j + 1 << endl;
            }
        }
    }

    cout << "\nNumber of mutually parallel pairs of lines = " << parallelPairsCount << endl;

    return 0;
}