
#include<iostream>
using namespace std;

class calculator
{

    private:
      int n1;
      int n2;
      int result;

    public:

     void getdata()
     {
        cout<<"\nEnter the first number:";
        cin>>n1;
        cout<<"Enter the second number:";
        cin>>n2;
     }

     void sum()
     {
      result=n1+n2;
      cout<<"The sum is "<<result<<endl;  
     }

     void sub()
     {
        result=n1-n2;
        cout<<"The difference is "<<result<<endl;
     }

     void product()
     {
        result=n1*n2;
        cout<<"The product is "<<result<<endl;
     }

     void division()
     {
        result=n1/n2;
        cout<<"The qoutient is "<<result<<endl;
     }

};

int main()
{
    string ch;
    int op;

    calculator c;;

    while(ch!="no")
    {
        cout<<"1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n";
        cout<<"Enter your choice :";
        cin>>op;

        switch(op)
        {
            case 1:
              c.getdata();
              c.sum();
            break;

            case 2:
               c.getdata();
               c.sub();
            break;

            case 3:
                c.getdata();
                c.product();
            break;

            case 4:
                c.getdata();
                c.division();
            break;

            default:
             cout<<"Invalid option"<<endl ;           

        }

        cout<<"\nDo you want to continue[yes/no]:";
        cin>>ch;
        cout<<"\n";
    }
return 0;
}