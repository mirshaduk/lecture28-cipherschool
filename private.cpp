#include<iostream>
#include<string>
using namespace std;

class Bank_client
{

    private:

    string name;
    int credit_number;
    int cvv;
    
    string password;
    string name;
    string usser_name;
    publuc:

    
    //we use public functions to set private data
    //private numbers can be acceseble only inside the class

    //***** to access stuff of an object you definetlynee a public element, as private elements of 


        void set_credit_card_number(int number)
        {
            credit_number = number;
        }

        void get_creditcardnumber()
        {
            cout<<"The credit card number is "<<credit_number;
        }
        void set_althestuffatonce(int number, int user_name, int pass)
        {
            credit_numbers = numbers;
            name = name;
            pasword = pass;
        }

        // we use get function to get the data
        // we use set function to set the data


};

int main()
{
    Bank_client a,b,c; 
    a.name = "student";
    // a.password = "enjoy12";
    // a.cvv = 334;

    // a.credit_number = 346473683;

    // cout<<"THe passwoed of stuent is"<<a.name;

    // cout<<a.cvv;

    // cout<<a.credit_number;

    a.set_credit_card_number(9867997789);
    a.get_creditcardnumber();


    a.
    return 0;


}