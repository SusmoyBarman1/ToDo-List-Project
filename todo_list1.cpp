//Do not use using namespace std;

#include<bits/stdc++.h>
using namespace std;

class List
{
	public:
		string description,date;
		int priority;
		addTolist(string des,string date1,int prio);
		recent();
		print();
};

/*struct List
{
	string description,date;
	int priority;
};*/

List todo_list[100];
int listsize=0;

void addTolist(string des,string date1,int prio)
{
	todo_list[listsize].description = des;
	todo_list[listsize].date = date1;
	todo_list[listsize].priority = prio;
	listsize++;
}

void recent()
{
	if(listsize==0)
	{
		cout<<"Your list is empty!!"<<endl;
	}
	cout<<"Description: "<<todo_list[listsize-1].description<<endl;
	cout<<"Ending date: "<<todo_list[listsize-1].date<<endl;
	cout<<"Priority: "<<todo_list[listsize-1].priority<<endl;
}

void print()
{
	for(int i=0;i<listsize;i++)
	{
		cout<<"Description: "<<todo_list[i].description<<endl;
		cout<<"Ending date: "<<todo_list[i].date<<endl;
		cout<<"Priority: "<<todo_list[i].priority<<endl;
	}
}
 
int main()
{
	//freopen("ToDoList.txt","w",stdout);
	int choice;
	char next_move = 'y';
	
	while(next_move=='y')
	{
		cout<<"This list will be your notebook to list your works"<<endl;
		cout<<"There is some options for you"<<endl;
		cout<<"1 -> Add something in the list"<<endl;
		cout<<"2 -> Which item I should do next!"<<endl;
		cout<<"3 -> Show my list"<<endl;
		
		cin>>choice;
		if(choice==1)
		{
			int priority;
			string description,date;
			cout<<"Give a description for your work!"<<endl;
			getchar();
			getline(cin,description);
			cout<<"Give the deadline in dd/mm/yy"<<endl;
			getline(cin,date);
			cout<<"Give the priority for the note, 1 = Not so important, 5 = Most important"<<endl;
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
		cout<<"Do you want to continue to the TO DO list?, if yes, then press 'y' or 'n'"<<endl;
		cin>>next_move;
	}
	return 0;	
}
