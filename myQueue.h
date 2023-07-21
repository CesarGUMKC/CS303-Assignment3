#pragma once
#include <iostream>
#include <string>


using namespace std;

template <typename itemType>
class Queue {

	
	struct Node {                                   //create node pointers to establish a linked list

		itemType data;                         
		Node* nextPtr;
		Node(const ItemType& data) : data(data), nextPtr(nullptr) {}

	};


private:
	
	Node* front;            //data variables of Queue
	Node* back;                
	int size;

public:

	Queue() {                  //default const
		front = nullptr;
		back = nullptr;
		size = 0;
	}

	~Queue() {
		while (!isEmpty()) {
			dequeue();
		}
	}

	void endQueue(const itemType& data) {             //function to add to queue
		Node* newQNode = new Node(data);

		if (front = nullptr) {           //if queue empty, add to front/back of queue
			front = newQNode;
			back = newQNode;
		}
		else {
			back->nextPtr = newQNode;            //else,add to end of the queue
			back = newQNode;

		}

		size++;

	}

	itemType deQueue() {                        //deletes element from queue
		itemType tempData;
		if (front == nullptr) {
			throw runtime_error("Queue is empty. Unable to Dequeue.");        //if empty throw error
		}

		else {                              //else delete element;
			Node* delNode = front;
			tempData = front->data;
			front = front->nextPtr;
			delete delNode;
			delNode = nullptr;
			size--;

			if (front == nullptr) {
				back = nullptr;
			}

			return tempData;
		}


	}

	itemType peek() {                    //peeks front element of queue
		itemType tempData;
		if (front = nullptr) {        // if empty
			throw runtime_error("Queue is empty.");
		}
		else {
			tempData = front->data;         //not empty, return first data
			return tempData;
		}
	}

	bool empty() const {                      //checks if Queue is emoty
		return front == nullptr;
	}

	int size() const {                 //returns size
		return size;
	}

	void printQueue() {                                     //prints the Queue until empty            
		Node* currentNode = front;

		if (front == nullptr) {
			cout << "Empty" << endl;
			return;
		}
		else {
			cout << "\nQueue: " << endl;

			while (currentNode != nullptr) {
				cout << currentNode->data << endl;
				currentNode = currentNode->nextPtr;
			}
		}
	}
};