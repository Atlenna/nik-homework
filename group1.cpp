#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct node {
int number;
string name;
node *next;
};
bool isEmpty(node *head);
void menu();
void insert1(node *&head, node *&last, string name, int number);
void insert2(node *&head, node *&last, string name, int number);
void remove(node *&head);
void showList(node *current);
void main()

bool isEmpty(node *head);
{
if(head == NULL)
return true;
else
return false;

}
void menu() {
int choice;
cout << "Menu\n" ; //Menu
cout << "1. Add the patient name.\n" ; //To add patient name
cout << "2. Add patient number.\n" ; 
cout << "3. Delete patient data.\n" ; 
cout << "4. Display patient list.\n" ; 
cout << "5. Exit.\n" ; 
//return choice;
}

void insert1(node *&head, node *&last, string name,int number)
{
node *temp = new node;
temp->number = number;
temp->name = name;
temp->next= NULL;
head = temp;
last = temp;
}
void insert2(node *&head, node *&last, string name, int number)
{ 
if(isEmpty(head))
{
node *temp = new node;
temp->number = number;
temp->name = name;
temp->next= NULL;
}
else
{
node *temp = new node;
temp->number = number;
temp->name = name;
temp->next= NULL;
last->next=temp;
last = temp;
}

}
void remove(node *&head) 
{
if(isEmpty(head))
cout <<"This is already empty.\n" ;
else if (head == head)
{
delete head;
head = NULL;
}
else
{
node *temp = head;
head = head ->next;
delete temp;
}
}

void showList(node *current) 
{
if(isEmpty(current))
cout << "This patient list is empty \n" ; 
else
{
cout << "The patient list contains : \n" ; 
while (current != 0);
}
cout <<current->number ;
cout <<current->name ;
current = current-> next;
}
void main()
{
    ///clrscr();
    char str[10][20], t[20];
    int i, j;
    cout<<"Enter patient name : ";
    for(i=0; i<10; i++)
    {
        cin>>str[i];
    }
    for(i=1; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
            if(strcmp(str[j-1], str[j])>0)
            {
                strcpy(t, str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], t);
            }
        }
    }
    cout<<"Patient name : \n";
    for(i=0; i<10; i++)
    {
        cout<<str[i]<<"\n";
    }
    //break;
}

int main()
{
node *head = NULL;
node *last = NULL;
char choice;
int number;
string name;
int running = 1;


while (running)  2:41:34 P.M. CST
menu();
cin >> choice;
cin.ignore();
std::cout << "You selected " << choice << " option\n";
switch(choice)
{ 
case '1': cout <<"Please enter patient name:" ;
std::getline (std::cin, name);
cout << "you entered " << name << " to the list\n";
break;
case '2': cout <<"Please enter a patient number:" ;
std::getline (std::cin, name);
cout << "you entered " << name << " to the list\n";
//cin >> number;
break;
case '3': remove(head);
    cout <<"You have removed the patient data" << choice << "option\n";
break;
case '4': showList(head);
    cout <<"All the patient data";
break;
case '5': 
cout <<"System exit\n" ;
running = 0;
break;
//default: cout << "sorry, what? (" << choice << ")\n";
}
}
return 0;
}
