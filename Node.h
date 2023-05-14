#pragma once

class List;

class Node
{
public:
	Node();
	Node(int info, Node* next);
	~Node();
	int getInfo();
	void setInfo(int info);
	Node* getNext();
	void setNext(Node* next);
	friend class List;
protected:
	int info;
	Node* next;
};

