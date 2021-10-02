//Mini project 2
//Project Name:- Student Result 
#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		int rollNo;
		char name[20];
	
	public:
		void read();
		void display();
		 
};
class marks : public student
{
	protected:
		int English;
		int Maths;
		int Science;
		int Marathi;
	public:
         void getMarks();
		 void putMarks();	     		
};
class result : public marks
{
	protected:
		int totalMarks;
		float percentage;
		char div[10];
		
	public:
	    void process();
		void print_Result();			
};
void student :: read()
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter Roll No:";
	cin>>rollNo;
}

void student :: display()
{
	cout<<"****Display Student Information****"<<endl;
	cout<<"Enter name:"<<name<<endl;
	cout<<"Enter Roll No:"<<rollNo<<endl;
}
void marks :: getMarks()
{
    cout<<"\n====Enter 3 Subject Marks===="<<endl;    

    cout<<"Enter Marks of English: ";
    cin>>English;
    
    cout<<"Enter Marks of Maths: ";
    cin>>Maths;

    cout<<"Enter Marks of Science: ";
    cin>>Science;

    cout<<"Enter Marks of Marathi: ";
    cin>>Marathi;
}

void marks :: putMarks()
{
    cout<<"\n****Enter 3 Subject Marks****"<<endl;    

    cout<<"Enter Marks of English: "<<English<<endl;
    
    cout<<"Enter Marks of Maths: "<<Maths<<endl;

    cout<<"Enter Marks of science: "<<Science<<endl;
    
    cout<<"Enter Marks of Marathi: "<<Science<<endl;
}
void result :: process()
{
    totalMarks = English + Maths + Science + Marathi;
    percentage = totalMarks/4.0; //(t/400.0)*100;

    //Ternary operator
    percentage>=60 ? strcpy(div, "First") : percentage>=50 ? strcpy(div, "Second") : strcpy(div, "Third");
}

void result :: print_Result()
{
    cout<<"\nTotal Marks = "<<totalMarks<<endl;
    cout<<"Percentage = "<<percentage<<endl;
    cout<<"Division = "<<div<<endl;
}
int main()
{
    result x;

    x.read();
    x.getMarks();
    x.process();

    x.display();
    x.putMarks();
    x.print_Result();
    
    return 0;
}





















