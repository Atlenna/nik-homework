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
void bubbleSort(struct node *head);
void swap(struct node *a, struct node *b);

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
cout << "5. Sort by name.\n" ;
cout << "6. Exit.\n" ; 
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

void showList(node *current) {
    if(isEmpty(current))
        cout << "This patient list is empty \n" ; 
   
    else {
        cout << "The patient list contains : \n" ; 
       
    while (current->next != NULL) {
            cout << current->number ;
            cout << current->name ;
            current = current-> next;
        }
    }
  void bubbleSort(struct node *head)
{
    int swapped, i;
    struct node *name = NULL;

 
    /* Checking for empty list */
    if (name == NULL)
        return;
 
    do
    {
        swapped = 0;
        name = head;
 
        while (name->next != name)
        {
            if (name->name > name->next->name)
            { 
                swap(name, name->next);
                swapped = 1;
            }
            name = name->next;
        }
        name = name;
    }
    while (swapped);
}
 
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b)
{
    string temp = a->name;
    a->name = b->name;
    b->name = temp;
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
case '5': bubbleSort(head) ;
	cout <<"Sort by patient name";
case '6': 
cout <<"System exit\n" ;
running = 0;
break;
//default: cout << "sorry, what? (" << choice << ")\n";
}
  
if (name != "" && number > 0) {
insert1(head, last, name, number);
name = "";
number = -1;
}
return 0;
}
