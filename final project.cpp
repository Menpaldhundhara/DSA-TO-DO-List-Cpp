/*** The concepts used while making this project
     1. Linked list
     2. Priority queue***/
/*** C++ CODE FOR TO DO LIST ***/
#include<iostream>
#include<string.h>
using namespace std;
/*** TO DO LIST BASED ON THE CONCEPT OF LINKED LIST ***/
struct tasks{
	string data;
	int priority;
	struct tasks*next;
};
/*** GLOBAL VARIABLES ***/
struct tasks*start=NULL;
struct tasks*ptr;
struct tasks*pre;
int p;
string yesterday_list[100];
string today_list[100];
string tommorow_list[100];
/*** THE VERY FIRST TASK IN THE TO DO LIST ***/
void create_tasks(){
	struct tasks*newtask1=new tasks;
	cout<<"Enter 1st task "<<endl;
	start=newtask1;
	cin.ignore();	
	getline(cin, newtask1->data);
	cout<<"Enter the priority of the task "<<endl;
	cin>>p;
	newtask1->priority=p;
	newtask1->next=NULL;
}
/*** ADDING UP TASK IN THE TO DO LIST ***/
void add_new_task_in_end(){
	struct tasks*newtask=new tasks;
	ptr=start;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=newtask;
	cout<<"Add new task  "<<endl;
	cin.ignore();
	getline(cin, newtask->data);
	cout<<"Enter the priority of the task "<<endl;
	cin>>p;
	newtask->priority=p;
	newtask->next=NULL;
}
/*** TO DELETE ANY TASK AFTER COMPLETION ***/
void delete_tasks() {
    string deletetask;
    cout << "Enter the task to be deleted: " << endl;
    cin.ignore();
    getline(cin, deletetask);
    ptr = start;
    pre = ptr;
    while(ptr->data != deletetask) {
        pre = ptr;
        ptr = ptr->next;
    }
    pre->next = ptr->next; 
}
/*** TO COUNT THE NUMBER OF TASKS IN THE TO DO LIST ***/
void count_tasks(){
	int Count=1;
	ptr=start;
	while(ptr->next!=NULL){
		Count++;
		ptr=ptr->next;
	}
	cout<<"The number of task in To Do List is "<<Count<<endl;
}
/*** TO EDIT ANY PRESENT TASK IN TO DO LIST ***/
void edit_list(){
	string Search,Edited;
	cout<<"Enter the task to be edited "<<endl;
	cin.ignore();
	getline(cin, Search);
	ptr=start;
	while(ptr->data!=Search){
	ptr=ptr->next;
	}
	cout<<"Enter the edited task "<<endl;
	getline(cin, Edited);
	ptr->data=Edited;
}
/*** SEARCH THE PRIORITY OF THE GIVEN TASK ***/
void search_tasks(){
	string task;
	cout<<"Enter the task for search priority "<<endl;
	cin.ignore();
	getline(cin, task);	
    ptr=start;
	while(ptr->data!=task){
		ptr=ptr->next;
	}
	cout<<"Priority for the following task "<<ptr->priority<<endl;
} 
/*** ARRANGE THE TO DO LIST AS PER THE INCREASING PRIORITY ***/
void priority_tasks(){
	cout<<"List with increasing priority"<<endl;
	ptr=start;
	pre=ptr;
	string temp;
	int current;
	while(pre->next!=NULL){
		ptr=pre->next;
		while(ptr!=NULL){
		if(pre->priority > ptr->priority){
			temp = pre->data;
			pre->data = ptr->data;
			ptr->data = temp;
			current = pre->priority;
			pre->priority=ptr->priority;
			ptr->priority=current;	
		}
		ptr=ptr->next;
	}
	pre=pre->next;
	}
		ptr=start;
		cout<<"Your current To Do list is "<<endl;
	while(ptr!=NULL){
		cout<<ptr->priority<<". ";
		cout<<ptr->data;
		cout<<" "<<endl;
		ptr=ptr->next;
	}
	cout<<endl;
}
void yesterday(){
	int i,condition;
	char x,y;
	while(true){
		cout<<"1..Create tasks list \n"<<"2..Add new task \n"<<"3..View list \n"<<"4..Priority task \n"<<"5..Edit list \n"<<"6..Count tasks \n"<<"7..Search task \n"<<"8..Delete tasks \n"<<"9.. Exit  \n";
		cin>>condition;
		/*** SWITCH CASES TO SELECT DESIRED FUNCTION ***/
		switch(condition){
			case 1:{
				create_tasks();
				cout<<"Task added"<<endl;
				break;
			}
			case 2:{
				add_new_task_in_end();
				cout<<"New task added"<<endl;
				break;
			}
			case 3:{
			ptr=start;int i=1;
			cout<<"Your current To Do list is "<<endl;
			while(ptr!=NULL){
			cout<<ptr->priority<<". ";
			cout<<ptr->data;
			cout<<" "<<endl;
			yesterday_list[i]=ptr->data;
			ptr=ptr->next;
			i=i+1;
			}
			cout<<endl;
			break;
			}
			case 4:{
				priority_tasks();
				break;
			}
			case 5:{
				edit_list();
				break;
			}
			case 6:{
				count_tasks();
				break;
			}
			case 7:{
				search_tasks();
				break;
			}
			case 8:{
				delete_tasks();
				cout<<"Deleted \n"<<endl;
				break;
			}
			case 9:{
				return ;
				break;
			}
		}
	}		
}
void today(){
		int i,condition;
	char x,y;
	while(true){
		cout<<"1..Create tasks list \n"<<"2..Add new task \n"<<"3..View list \n"<<"4..Priority task \n"<<"5..Edit list \n"<<"6..Count tasks \n"<<"7..Search task \n"<<"8..Delete tasks \n"<<"9.. Exit  \n";
		cin>>condition;
		/*** SWITCH CASES TO SELECT DESIRED FUNCTION ***/
		switch(condition){
			case 1:{
				create_tasks();
				cout<<"Task added"<<endl;
				break;
			}
			case 2:{
				add_new_task_in_end();
				cout<<"New task added"<<endl;
				break;
			}
			case 3:{
			ptr=start;int i=1;
			cout<<"Your current To Do list is "<<endl;
			while(ptr!=NULL){
			cout<<ptr->priority<<". ";
			cout<<ptr->data;
			cout<<" "<<endl;
			today_list[i]=ptr->data;
			ptr=ptr->next;
			i=i+1;
			}
			cout<<endl;
				break;
			}
			case 4:{
				priority_tasks();
				break;
			}
			case 5:{
				edit_list();
				break;
			}
			case 6:{
				count_tasks();
				break;
			}
			case 7:{
				search_tasks();
				break;
			}
			case 8:{
				delete_tasks();
				cout<<"Deleted \n"<<endl;
				break;
			}
			case 9:{
				return ;
				break;
			}
		}
	}		
}
void tommorow(){
		int i,condition;
	char x,y;
	while(true){
		cout<<"1..Create tasks list \n"<<"2..Add new task \n"<<"3..View list \n"<<"4..Priority task \n"<<"5..Edit list \n"<<"6..Count tasks \n"<<"7..Search task \n"<<"8..Delete tasks \n"<<"9.. Exit  \n";
		cin>>condition;
		/*** SWITCH CASES TO SELECT DESIRED FUNCTION ***/
		switch(condition){
			case 1:{
				create_tasks();
				cout<<"Task added"<<endl;
				break;
			}
			case 2:{
				add_new_task_in_end();
				cout<<"New task added"<<endl;
				break;
			}
			case 3:{
			ptr=start; int i=1;
			cout<<"Your current To Do list is "<<endl;
			while(ptr!=NULL){
			cout<<ptr->priority<<". ";
			cout<<ptr->data;
			cout<<" "<<endl;
			tommorow_list[i]=ptr->data;
			ptr=ptr->next;
			i=i+1;
			}
			cout<<endl;
			break;
			}
			case 4:{
				priority_tasks();
				break;
			}
			case 5:{
				edit_list();
				break;
			}
			case 6:{
				count_tasks();
				break;
			}
			case 7:{
				search_tasks();
				break;
			}
			case 8:{
				delete_tasks();
				cout<<"Deleted \n"<<endl;
				break;
			}
			case 9:{
				return ;
				break;
			}
		}
	}		
}
void display_all(){
	int i=1,j=1,k=1;
	int n;
	cout<<"Enter the number of tasks in everyday "<<endl;
	cin>>n;
    cout<<"Yesterday To do list is "<<endl;
	while(i<=n){
    	cout<<yesterday_list[i]<<endl;
    	i=i+1;
	}
 	cout<<"Today To do list is "<<endl;
	while(j<=n){
 		cout<<today_list[j]<<endl;
		j=j+1;
	}
 	cout<<"Tommorow To do list is "<<endl;
	while(k<=n){
 		cout<<tommorow_list[k]<<endl;
		k=k+1;
	}
 }
 /*** MAIN FUNCTION ***/
int main(){
	int i,condition;
	char x,y;
	while(true){
		cout<<"Select the day "<<endl;
		cout<<"1.Yesterday \n2.Today \n3.Tommorow \n4.Display All in one \n5.Done \n";
		cout<<"Select the function for the following day"<<endl;
		cin>>condition;
		/*** SWITCH CASES TO SELECT DESIRED FUNCTION ***/
		switch(condition){
		case 1:{
			yesterday();
			break;
		}
		case 2:{
			today();
			break;
		}	
		case 3:{
			tommorow();
			break;
		}
		case 4:{
			display_all();
			break;
		}
		case 5:{
			exit(0);
			break;
		}
	}	
}	
	return 0;
}
