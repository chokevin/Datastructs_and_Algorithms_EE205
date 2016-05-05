#include <iostream>

struct ListNode{
	int value;
	ListNode* next;
};

class IntList{
public:
	IntList();
	IntList(const IntList & other);
	~IntList();
	IntList& operator =( const IntList & other);
private:
	int num;
	ListNode* first;
};

IntList::IntList( const IntList &other){

	ListNode * p1 = 0;
	ListNode * p2 = 0;

	if(other.first == 0) first = 0;
	else{
		first = new ListNode;
		first -> value = other.first -> value;

		p1 = first;
		p2 = other.first -> next;
	}
	while(p2){
		p1->next = new ListNode;
		p1 = p1 -> next;
		p1 -> value = p2 -> value;
		p2 = p2 -> next;
	}
	p1 -> next = 0;

}


IntList::~IntList(){
	num = 0;
	free(first);

}


IntList& IntList::operator=(const IntList &other){
	this->num = other.num;
	this->first = other.first;
	return *this;
}


int main(){

	return 0;

}
