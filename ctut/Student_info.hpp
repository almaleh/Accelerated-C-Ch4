//
//  Student_info.hpp
//  ctut
//
//  Created by Besher on 2018-04-25.
//  Copyright © 2018 Besher. All rights reserved.
//

#ifndef Student_info_hpp
#define Student_info_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double finalGrade;
//    std::vector<double> homework;
    
    static std::istream& read(std::istream&, Student_info&);
    static std::istream& read_hw(std::istream&, std::vector<double>&);
};

bool compare(const Student_info&, const Student_info&);


#endif /* Student_info_hpp */

