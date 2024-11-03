#include<iostream>  //SCENERIO: GAME EVENT
using namespace std;
int main()
{
	int entryfee=30,snackcost=10;
	int nmbrstudent;
	int totalcost;
	const int maxstudent=15;
	cout<<"How many students will attend the game night?(Max 15)"<<endl;
	cin>>nmbrstudent;
	if(nmbrstudent>maxstudent)
	{
		cout<<"Error: Not more students allowed."<<endl;
		return 1;
	}
	string name[maxstudent];
	for(int i=0;i<nmbrstudent;++i)
	{
		cout<<"Enter name for student "<< i+1<<":"<<endl;
		cin>>name[i];
		int studentcost=entryfee+snackcost;
		totalcost+=studentcost;
		cout<<name[i]<<"Entry fee:$ "<<entryfee<<",snack cost:$"<<snackcost<<",Total cost of user:$"<<studentcost<<endl;
	}
	cout<<endl;
	cout<<"Student names for the game night event:"<<endl;
	for(int i=0;i<nmbrstudent;i++)
	{
	cout<<"Student"<<i+1<<":"<<name[i]<<endl;
}
cout<<"Total cost for all students is:$ "<<totalcost<<endl;
return 0;
	
}
