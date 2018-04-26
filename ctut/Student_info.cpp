//
//  Student_info.cpp
//  ctut
//
//  Created by Besher on 2018-04-25.
//  Copyright © 2018 Besher. All rights reserved.
//

#include "Student_info.hpp"
#include "Grade.hpp"


using namespace std;



bool compare(const Student_info& x, const Student_info& y) {
    return x.name < y.name;
}

istream& Student_info::read(istream& is, Student_info& s) {
    double midterm, final;
    is >> s.name >> midterm >> final;
    
    std::vector<double> homework;
    Student_info::read_hw(is, homework);
    if (homework.size() < 1) { return is; }
    s.finalGrade = grade(midterm, final, homework);
    return is;
}


istream& Student_info::read_hw(istream& in, vector<double>& hw) {
    if (in) {
        hw.clear();

        double x;
        while (in >> x) {
            cout << "New homework entry: " << x << endl;
            hw.push_back(x);
        }

        in.clear();
    }
    return in;
}
