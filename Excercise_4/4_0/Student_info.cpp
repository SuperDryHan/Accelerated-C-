#include "Student_info.h"
 
using std::istream;
using std::vector;
 
bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name; // When a type(data type) has multiple types in it, simple compare is ambuguous so need to specify which data group we want to compare.
}
 
istream& read(istream& is, Student_info& s)
{
    is >> s.name >> s.midterm >> s.final;
 
    read_hw(is, s.homework);
    return is;
}

// read homework grades from an input stream into a vector<double>
// (as defined in S4.1.3/57)
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in)
    {
        // get rid of previous contents
        hw.clear();
 
        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);
 
        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}
