#ifndef GUARD_grade_h
#define GUARD_grade_h
 
//grade.h
#include <vector>
#include "Student_info.h"
 
double grade_Median(double, double, double);
double grade_Raw(double, double, const std::vector<double>&);
double grade(const Student_info&);
 
#endif // GUARD_GRADE_H