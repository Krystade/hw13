/*
 * Queue.h
 *
 *  Created on: Apr 7, 2020
 *      Author: Jack
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
using namespace std;


template <typename T>
class Queue{
private:
	//Index of array where head is located
	int head;
	//Index of array where tail is located
	int tail;
	//Maximum number of entries the queue can hold
	int maxSize;
	//Current size of element
	int currentSize;
	//Elements of the queue
	T * elems;

public:
	//Default constructor
	Queue(int size = 15);
	//Destructor
	~Queue();

	// inserts an element at the end of the	queue
	void enqueue(T object);
	//removes and returns the element at the front of the queue
	T dequeue();
	// returns the element at the front without	removing it
	T front(){return elems[head];};
	// returns the number of elements stored
	int size(){return currentSize;};
	//indicates whether no elements are	stored
	bool isEmpty(){return size() == 0;};
	//indicates whether queue is full
	bool isFull(){return size() == maxSize;};

	//Prints out all the data in the queue
	void print();
};

#endif /* QUEUE_H_ */
