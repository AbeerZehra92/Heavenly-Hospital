//BISMIL-ALLAH-IR-RAHMAN ARRAHEEM

#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<math.h>

using namespace std;
class Details
{
	private:
		int id;
		string name;
	public:
		void set()
		{
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter id:"<<endl;
			cin>>id;
		}
		string getname()
		{
			return name;
		}
		int getid()
		{
			return id;
		}
};

class Person:public Details
{
	private:
		long phone_num;
		char gender;
	public:
		
		void greet()
		{
			cout<<"Hello and Welcome to the Heavenly Hospital!"<<endl;
		}
				
		void set()
		{
			Details::set();
		
			cout<<"Enter Gender"<<endl;
			cin>>gender;
			
			cout<<"Enter phone number:"<<endl;
			cin>>phone_num;
			
		}
	    void get()
	    {
	    	string name=Details::getname();
			int id=Details::getid();
		}
		char getgender()
		{
			return gender;
			
		}
		
		long getphone()
		{
			return phone_num;
		}
		
};
class Department:public Details,public Person
{
	private:
		int	No_of_Rooms;
	public:
		void adddoctor()
		{
		Person::set();
		}
		void deleletedoctor()
		{
					
		}
		//just for checking friend func.
		friend Department check(const Department&);
};
Department check(const Department& depart){
	depart.No_of_Rooms=90;
}
class Doctor:public Person
{
	
	
};
class Patient:public Person
{
	int choice;
	public:
	void set()
	{
	Person::set();
	cout<<"choose Department:"<<endl;
	cout<<"1) Neurology \n2)Pediatric\n3)Internal Medicine \n4)Phychiatric \n5)E.N.T\n6)Emergency:";
	cin>>choice;
	switch(choice)
	{
		case 1:
		
			//filing
			showneuro();
			break;
		case 2:
		   
		   //filling
		   break;
		 case 3:
		    
			//filling
			break;
		case 4:
		break;
		case 5:
		break;
		case 6:
		break;
		default:
		cout<<"\nDepartment not present:\n";	  	
		}	
	}
	void get()
	{
	Person::get();		
	}
	

};
class Receptionist:public Person
{
	char ans;
	Receptionist(){
	cout<<"Do you have an appointment(Y/N)?"<<endl;
	cin>>ans;
	switch(ans) 
	{
	
	case 'n'||'N':
		char choice='m';
		while(choice=='M'||choice=='m'||choice=='W'||choice=='w'){
			
		
		cout<<"do you want to make an appointment?(M) OR Walk in?(W)";
		cin>>choice;
		if(choice=='M'||choice=='m'){
			makeappointment();
		}
		else if(choice=='W'||choice=='w'){
			"//////////"
		}
		else
		cout<<"enter valid input";
	}
		break;
	case 'y':
	case 'Y':
		int id;
		cout<<"enter your assigned doctor's ID number:";
		cin>>id;
		checkappointment(id);
		break;	
		default:
			cout<<"Enter valid input:";
	}
	}
};
int main(void){
	Patient pa;
	return 1;
}
