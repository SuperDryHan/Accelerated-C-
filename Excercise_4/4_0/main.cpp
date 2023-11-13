#include <algorithm> // To call sort function
#include <iomanip> // To cll setprecision
#include <ios> // To call streamsize
#include <iostream> // For sequential access
#include <stdexcept> // To call domain_error
#include <string> // To call string type
#include <vector> // To call vector
#include "grade.h" // Include graded header
#include "Student_info.h" // Include Student_info header
 
using std::cin;
using std::cout;
using std::endl;
using std::domain_error;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;
 
int main()
{
    vector<Student_info> students; // Define variable students which is vector<Student_info> type
    Student_info record; // Define variable record which is Student_info type
    string::size_type maxlen = 0;   // Define variable mexlen which is string::size type. When we don't know maximum size, it is always good to use size_type not to have truncataion of data
    
    // read and store all the student's data.
    // Invariant:   students contain all the student records read so far
    //              maxlen contains the length of the longest name in students
    while (read(cin, record)) // Do followings as long as function read() have cin
    {
        // find the length of longest name
        maxlen = max(maxlen, record.name.size()); // Update maxlen as longest name
        students.push_back(record); // Add Student_info type vector
    }
 
    // alphabetize the student records
    sort(students.begin(), students.end(), compare); // Sort Student_info type in name with alphabetical order
 
    // write the names and grades
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) // Loop as long as i doesn't reach number of entries in student variable.
    {
        //write the name, padded on teh right to maxlen + 1 characters
        cout << students[i].name // Print out each student name 
             << string(maxlen + 1 - students[i].name.size(), ' '); // Add pad after student name 
 
        try
        {
            double final_grade = grade(students[i]); // Assign double type final_grade from grade function. This grade function has Student_info type as its argument.
            streamsize prec = cout.precision(); // Assign prec as default precision
            cout << setprecision(3) << final_grade // Print final_grade with precision 3 then go back to default precision
                 << setprecision(prec);
        }
        catch (domain_error e) // When try is failed, throw domain error.
        {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}