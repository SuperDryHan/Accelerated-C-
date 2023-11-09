// EX 2-0
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    cout << "Please enter your first name: ";



    string name;
    cin >> name;



    const string greeting = "Hello, " + name + "!";



    const int pad = 1;



    const int rows = pad * 2 + 3;
    const int cols = greeting.size()+ pad * 2 + 2;



    cout << endl;



    for(int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        while(c != cols)
        {
            if(r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}










// EX 2-1
// Assign pad as 0 in the previous program









//EX 2-2

#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    cout << "Please enter your first name: ";



    string name;
    cin >> name;



    const string greeting = "Hello, " + name + "!";



    const int vertical_pad = 1; // Change here
    const int horizontal_pad = 5; // Change here




    const int rows = vertical_pad * 2 + 3; // Change here
    const int cols = greeting.size()+ horizontal_pad * 2 + 2; // Change here



    cout << endl;



    for(int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        while(c != cols)
        {
            if(r == vertical_pad + 1 && c == horizontal_pad + 1) // Change here
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}










//EX 2-3
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    cout << "Please enter your first name: ";



    string name;
    cin >> name;



    const string greeting = "Hello, " + name + "!";



    cout << "Please enter space you desire: "; // Change here



    int pad; // Change here
    cin >> pad; // Change here



    const int rows = pad * 2 + 3;
    const int cols = greeting.size()+ pad * 2 + 2;



    cout << endl;



    for(int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        while(c != cols)
        {
            if(r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}










//EX 2-4
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main()
{
    cout << "Please enter your first name: ";



    string name;
    cin >> name;



    const string greeting = "Hello, " + name + "!";



    const int pad = 10;



    const int rows = pad * 2 + 3;
    const int cols = greeting.size()+ pad * 2 + 2;



    cout << endl;



    for(int r = 0; r != rows; ++r)
    {
        if(r == 0 || r == rows - 1)
        {
            string first(cols, '*');
            cout << first;
        }
        else
        {
            if(r < rows / 2 || r >= rows / 2 + 1)
            {
                string second(cols - 2, ' ');
                cout << "*" + second + "*";
            }
            else{
                string spaces(pad, ' ');
                cout << "*" + spaces + greeting + spaces + "*";
            }
        }
        
        cout << endl;
    }
    return 0;
}











//EX 2-5
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// square
int main()
{
    cout << "Enter desired width";

    int width;
    cin >> width;

    string border(width, '*');
    string space(width-2, ' ');
    string non_border = "*" + space + "*";
    
    for(int row = 0; row != width; ++row)
    {
        if(row == 0 || row == width -1) cout << border; else cout << non_border;
        
        cout << endl;
    }
}



#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Triangle
int main()
{
    cout << "Enter desired height.";
    int Height;
    cin >> Height;
    int Width = Height * 2 - 1;

    string First_space(Width / 2, ' ');
    string First = First_space + "*" + First_space;
    cout << First << endl;

    for(int row = 1; row < Height - 1; ++row)
    {
        int Mid_empty_size = 2 * row -1;
        string Mid_space_1((Width - Mid_empty_size - 2) / 2, ' ');
        string Mid_space_2(Mid_empty_size, ' ');
        string Mid = Mid_space_1 + "*" + Mid_space_2 + "*" + Mid_space_1;
        cout << Mid << endl;
    }
    
    string Last(Width, '*');
    cout << Last << endl;
}










//EX 2-6
// The program print from 1 to 10 in each line.
#include <iostream>
int main()
{
    int i = 0;
    while (i < 10) {
        i += 1;
        std::cout << i << std::endl;
    }
}










//EX 2-7
#include <iostream>

int main()
{
    for(int n = 10; n >= -5; n += -1)
    {
        std::cout << n << std::endl;
    }
}










//EX 2-8
#include <iostream>

int main()
{
    int Roll = 1;

    for(int i = 1; i < 10; i += 1)
    {
        Roll = i * Roll;
        std::cout << Roll << std::endl;
    }

    std::cout << Roll << std::endl;
}










//EX 2-9
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter the first number that you want to compare." << endl;
    int First;
    cin >> First;

    cout << "Enter the second number that you want to compare." << endl;
    int Second;
    cin >> Second;

    cout << "The larger number is " << std::max(First, Second) << "." << endl;

}










//EX 2-10
// The seond "std" is required as the first "std::cout" is mounted in the first range locally. 


