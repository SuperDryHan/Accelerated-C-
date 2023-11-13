#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"
 
using std::domain_error;
using std::vector;

double grade(double midterm, double final, double homework) // Taking midterm, final and homework scores which are double values
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}
 
double grade(double midterm, double final, const vector<double>& hw) 
{
    if (hw.size() == 0) // If size of homework is zero then throw the error. 
        throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw)); // Calculate grade
}
 
double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework); // Calculate grade from Student_info type.
}