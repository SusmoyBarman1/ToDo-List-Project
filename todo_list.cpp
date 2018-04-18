//Do not use using namespace std;

#include<iostream>
#include<fstream>
using namespace std;

/*class List
{
	public:
		string description,date;
		int priority;
		addTolist(string des,string date1,int prio);
		recent();
		print();
};
*/
struct List
{
	string description,date,des,end,prio;
	int priority;
};

List todo[100],var;
int listsize=0;

void addTolist(string des,string date1,int prio)
{
	todo[listsize].description = des;
	todo[listsize].date = date1;
	todo[listsize].priority = prio;
	listsize++;
}

void recent()
{
	if(listsize==0)
	{
		cout<<"Your list is empty!!"<<endl;
	}
	cout<<var.des<<todo[listsize-1].description<<endl;
	cout<<var.end<<todo[listsize-1].date<<endl;
	cout<<var.prio<<todo[listsize-1].priority<<endl;
}

void print()
{
	cout<<"\nYour list is given bellow"<<endl;
	for(int i=0;i<listsize;i++)
	{
		cout<<var.des<<todo[i].description<<endl;
		cout<<var.end<<todo[i].date<<endl;
		cout<<var.prio<<todo[i].priority<<endl<<endl;
	}
}
 
int main()
{
	ifstream myfile1("strings.txt");
	ifstream myfile2("string2.txt");
	string str1,str2,str3,str4,str5,str6,str7,str8,ask;
	ask = "Do you want to continue to the TO DO list?, if yes, then press 'y' or 'n'";
	int choice;
	char next_move = 'y';

	var.des = "Description: ";
	var.end = "Ending date: ";
	var.prio = "Priority: ";
	
	getline(myfile1,str1);
	getline(myfile1,str2);
	getline(myfile1,str3);
	getline(myfile1,str4);
	getline(myfile1,str5);
	getline(myfile2,str6);
	getline(myfile2,str7);
	getline(myfile2,str8);

	while(next_move=='y')
	{
		cout<<endl<<str1<<endl<<str2<<endl<<str3<<endl<<str4<<endl<<str5<<endl;		
		cin>>choice;
		if(choice==1)
		{
			getchar();
			int priority;
			string description,date;
			cout<<str6<<endl;
			getline(cin,description);		
			cout<<str7<<endl;
			getline(cin,date);			
			cout<<str8<<endl;
			cin>>priority;

			addTolist(description,date,priority);
		}
		else if(choice==2)
		{
			recent();
		}
		else if(choice==3)
		{
			print();
		}
		else
		{
			cout<<"Incorrect choice!!"<<endl;
		}
		cout<<ask<<endl;
		cin>>next_move;
	}
	print();
	return 0;	
}
