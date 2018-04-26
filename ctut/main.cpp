//
//  main.cpp
//  ctut
//
//  Created by Besher on 2018-03-26.
//  Copyright © 2018 Besher. All rights reserved.
//

#include "Median.hpp"
#include "Student_info.hpp"
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <sstream>
#include <string>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <stdexcept>

using std::cin; using std::sort; using std::cout; using std::streamsize; using std::endl;
using std::string; using std::setprecision; using std::vector;


int main(int argc, const char * argv[]) {
    
    cout << "Please enter something: "; 

    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    
    while (Student_info::read(cin, record)) {
        maxlen = std::max(maxlen, record.name.size());
        students.push_back(record);
        cout << "Entered student record with the name: " << record.name << " and the final grade: " << record.finalGrade << endl;
        cin.clear();
    }
    std::sort(students.begin(), students.end(), compare);
    
    
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        cout << students[i].name << string (maxlen + 1 - students[i].name.size(), ' ');
        try {
            streamsize prec = cout.precision();
            cout << setprecision(3) << students[i].finalGrade << setprecision(prec);
        } catch (std::domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    
    
    
    
    
    
//    cout << "Please enter your first name: ";
//    string name;
//    cin >> name;
//    cout << "Hello, " << name << "!" << endl;
//
//    cout << "Please enter your midterm and final exam grades: ";
//    double midterm, final;
//    cin >> midterm >> final;
//
//    cout << "Enter all your homework grades, " "followed by end-of-file: ";
//
//    vector<double> homework;
//
//    read_hw(cin, homework);
//
//    try {
//        double final_grade = grade(midterm, final, homework);
//        streamsize prec = cout.precision();
//        cout << "Your final grade is " << setprecision(3) << final_grade << setprecision(int(prec)) << endl;
//    } catch (std::domain_error e) {
//        cout << endl << "You must enter your grades.  " "Please try again." << endl;
//        cout << "The exception is: " << e.what() << endl;
//        return 1;
//    }
    
    return 0;
}
