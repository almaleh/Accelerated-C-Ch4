//
//  Grade.hpp
//  ctut
//
//  Created by Besher on 2018-04-25.
//  Copyright © 2018 Besher. All rights reserved.
//

#ifndef Grade_hpp
#define Grade_hpp

#include <stdio.h>
#include <vector>
#include "Student_info.hpp"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
//double grade(const Student_info&);

#endif /* Grade_hpp */
