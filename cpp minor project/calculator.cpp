#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int opr;
    double result;
    

    cout<<"Please select your operation to be selected"<<endl;

    cout<<"1 for Addition"<<endl;
    cout<<"2 for Subtraction"<<endl;
    cout<<"3 for Multiplication"<<endl;
    cout<<"4 for Division"<<endl;

    cout<<"Enter:"<<endl;
    cin>>opr;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if(opr==1)
    {
        result=num1+num2;
        cout<<"You have selected addition operation"<<endl;
        cout<<"Result is: "<<result;
    }
    else if(opr==2)
    {
        result=num1-num2;
        cout<<"You have selected subtraction operation"<<endl;
        cout<<"Result is: "<<result;
    }
    else if(opr==3)
    {
        result=num1*num2;
        cout<<"You have selected multiplication operation"<<endl;
        cout<<"Result is: "<<result;
    }
    else if(opr==4)
    {
        result=num1/num2;
        cout<<"You have selected division operation"<<endl;
        cout<<"Result is: "<<result;
    }
    else
    {
        cout<<"Wrong entry";
    }

    return 0;



}