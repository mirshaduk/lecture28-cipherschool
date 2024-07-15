#include<iostream>
using namespace std;

class student
{

    public:

    string name;
    int attendence;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";

    }
};

int main()
{
    student a,b,c;
    a.name = "Rohit";
    a.attendence = 90;
    a.total_marks<<69;

    a.calculate_percentage();

    return 0;


}