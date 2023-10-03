#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdio.h>
using namespace std;




class Systemconfig{
	int mem;
	int dev;
	int quant;
	Systemconfig(int mem, int dev, int quant);
};


struct Job{
	int jobnum;
	int priority;
	int mem;
	int dev;
	int arrtime;
	int runtime;
};

struct node
{
int data;
node *next;
};



class Queue
{
node *rear,*front;
public:
Queue()
{
rear = NULL;
front = NULL;
}
void insert();
void delet();
void display();
};



void Queue :: insert()
{
node *temp;
temp = new node;
cout<<"Enter the element to be inserted: ";
cin>> temp -> data;
temp -> next = NULL;
if(rear == NULL)
{
rear = temp;
front = temp;
}
else
{
rear -> next = temp;
rear = temp;
}
}



void Queue :: delet()
{
if(front != NULL)
{
node *temp = front;
cout<< "The deleted element is: " << front -> data <<endl;
front = front -> next;
delete temp;
if(front == NULL)
rear= NULL;
}
else
cout<<"Queue Underflow!"<<endl;
}



void Queue :: display()
{
node *temp=front;
while(temp!=NULL)
{
cout<< temp -> data <<endl;
temp = temp -> next;
}
}

char* decryptcommand(string input){
	{
		int n = input.length();

		    char char_array[n + 1];


		   strcpy(char_array, input.c_str());
	   const char s[2] = " ";
	   char *token;

	   token = strtok(char_array, s);
	   if (token.at[0] == 'C'){

	   }
	   while( token != NULL ) {
	      printf( " %s\n", token );

	      token = strtok(NULL, s);
	   }

	   return 0;
}
}

int main()
{
	string filename("input.txt");
	    vector<string> lines;
	    string line;

	    ifstream input_file(filename);
	    if (!input_file.is_open()) {
	        cerr << "Could not open the file - '"
	             << filename << "'" << endl;
	        return EXIT_FAILURE;
	    }

	    while (getline(input_file, line)){
	        lines.push_back(line);
	    }

	    for (const auto &i : lines){
	    	decryptcommand(i);
	        cout << i << endl;

	    }

	    input_file.close();
	    return EXIT_SUCCESS;

Queue q;
int choice;
cout<<"LINKED LIST IMPLEMENTATION OF QUEUES\n\n";
do
{

cout<<"1. Insert\n2. Delete\n3. Display\n4. Exit\n\n";
cout<<"Enter your choice:";
cin>>choice;

switch(choice)
{
case 1:
q.insert();
break;
case 2:
q.delet();
break;
case 3:
q.display();
break;
case 4:
exit(0);
break;
default:
cout<<"Sorry, invalid choice!\n";
break;
}
} while(choice!=4);
return 0;
}
