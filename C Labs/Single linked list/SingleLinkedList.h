#ifndef SingleLinkedList_H_
#define SingleLinkedList_H_

typedef struct n{
	int info;
	struct n* link;	
}Node;

Node* insertInBeginning(Node* start,int data);

void insertAtEnd(Node* start,int data);

Node* CreateList(Node* start);

void DisplayList(Node* start)

Node* DeleteNode(Node* start,int data);


#endif