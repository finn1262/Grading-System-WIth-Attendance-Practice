#include <iostream>

using namespace std;

int main()
{
    string stn,sbj,attendance;
    float qg,ag,eg,qe,ae,ee,fg;

    cout << "----------------------------------" << endl;
    cout << "Grading System & Attendance System" << endl;
    cout << "----------------------------------" << endl;

    cout << endl << "Enter Student Name: ";
    getline(cin, stn);

    cout << "Enter Attendance Status: ";
    getline(cin, attendance);

    cout << "Enter Subject Name: ";
    getline(cin, sbj);

    cout << endl << "----------------------------------" << endl;

    cout << endl << "Enter Quiz Grade / 100: ";
    cin >> qg;

    cout << "Enter Assignment Grade / 100: ";
    cin >> ag;

    cout << "Enter Exam Grade / 50: ";
    cin >> eg;

    cout << endl << "----------------------------------";

    cout << endl << "\tStudent Subject Status";
    cout << endl << "----------------------------------" << endl;

    cout << endl << "Student Name: " << stn << endl;
    cout << "Attendance Status: " << attendance << endl;

    qe = ((qg/100)*100)*.3;
    ae = ((ag/100)*100)*.2;
    ee = ((eg/50)*100)*.5;

    fg = qe+ae+ee;

    cout << "Quiz Equivalent: " << qe << endl;
    cout << "Assignment Equivanlent: " << ae << endl;
    cout << "Exam Equivalent: " << ee << endl;

    cout << endl << "----------------------------------";

    cout << endl << "Your Finalgrade: " << fg << endl;

    if (fg >= 101) {cout << "Remarks: Not Valid Grade!";}
    if (fg >= 95 && fg <= 100) {cout << "Remarks: Execellent!";}
    if (fg >= 90 && fg <= 94) {cout << "Remarks: Very Good!";}
    if (fg >= 85 && fg <= 99) {cout << "Remarks: Good!";}
    if (fg >= 80 && fg <= 84) {cout << "Remarks: Passed";}
    if (fg >= 75 && fg <= 79) {cout << "Remarks: Passed But Needs Improvement";}
    if (fg <= 74) {cout << "Remarks: Failed";}

    cout << endl << "----------------------------------";

    return 0;
}
