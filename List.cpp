#include "List.h"
#include <iostream>
using namespace std;

List::List() : first(nullptr), last(nullptr)
{
}

List::List(Node* first, Node* last) : first(first), last(last)
{
}

List::~List()
{
	Node* p = first, * q;
	while (p)
	{
		q = p;
		p = p->next;
		delete q;
	}
	first = nullptr;
	last = nullptr;
}

int List::isEmpty()
{
	if (first == nullptr)
		return 1;
	else return 0;
}

void List::addNode(Node node, int n)
//the element will be added at the end of the list
{
	Node* p = new Node(n, 0);
	if (isEmpty())
		first = last = p;
	else {
		last->next = p;
		last = p;
	}
}

void List::printNode(List list)
{
	Node* p = list.getFirst();
	while (p)
	{
		cout << p->getInfo() << " ";
		p = p->getNext();
	}
	cout << endl;
}

void List::deleteNodeAtPosN(List list, int n)
{
	Node* p = list.getFirst();
	Node* temp = p;
	Node* prev = NULL;
	int cnt = 1;
	if (n == 1)
	{
		p = temp->getNext();
		delete temp;
		return;
	}
	else {
		while (temp && cnt != n)
		{
			cnt++;
			prev = temp;
			temp = temp->getNext();
		}
		if (temp == NULL)
			return;
		prev->next = temp->next;
		delete temp;
	}
}

void List::deleteNodesLess(List list, int n)
{
	Node* p = list.getFirst(), *temp = NULL;
	while (p)
	{
		if (p->getNext()->getInfo() < n)
		{
			temp = p->getNext();
			p = p->getNext();
			delete temp;
		}
	}
}

void List::calcMean(List list)
{
	Node* p = list.getFirst();
	int no = 0;
	float sum = 0.0, mean = 0.0;
	while (p)
	{
		sum += p->getInfo();
		no++;
		p = p->getNext();
	}
	mean = sum / no;
	cout << mean;
}

Node* List::getFirst()
{
	return first;
}

Node* List::getLast()
{
	return last;
}
