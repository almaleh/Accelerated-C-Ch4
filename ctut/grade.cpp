//
//  Grade.cpp
//  ctut
//
//  Created by Besher on 2018-04-25.
//  Copyright © 2018 Besher. All rights reserved.
//

#include "Grade.hpp"
#include <vector>
#include <stdexcept>
#include "Median.hpp"
#include "Student_info.hpp"

using namespace std;

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0)
    {
        throw std::domain_error("student has done no homework");
    }
    
    return grade(midterm, final, calcMedian(hw));
}

//double grade(const Student_info& s) {
//    return grade(s.midterm, s.final, s.homework);
//}
