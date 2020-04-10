//============================================================================
// Name        : hw12.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Functional Queue Template C++, Ansi-style
//============================================================================

#include "Queue.cpp"
#include "assert.h"

int main() {

	cout << "Integer Queue\n\n";

	//Size set to 6 to allow for exception to be thrown when array is full and another
	//item is attempted to be added
	Queue<int> intQ(6);

	//Testing both a true and a false assert statement
	assert(intQ.isEmpty());
	//assert(intQ.isFull());
	//dequeue() called to trigger exception to be thrown when trying to remove an item from an
	//empty list
	intQ.dequeue();
	cout << "isFull() == " << intQ.isFull() << endl;
	cout << "isEmpty() == " << intQ.isEmpty() << endl << endl;

	intQ.enqueue(1);
	intQ.enqueue(2);
	intQ.enqueue(3);
	intQ.enqueue(4);
	intQ.enqueue(5);
	intQ.enqueue(6);
	intQ.print();

	intQ.dequeue();
	intQ.dequeue();
	intQ.dequeue();
	intQ.dequeue();
	intQ.print();

	intQ.enqueue(7);
	intQ.enqueue(8);
	intQ.enqueue(9);
	intQ.enqueue(10);
	intQ.enqueue(11);
	intQ.print();

	cout << "isFull() == " << intQ.isFull() << endl;
	cout << "isEmpty() == " << intQ.isEmpty() << endl << endl;

	intQ.dequeue();
	intQ.dequeue();
	intQ.dequeue();
	intQ.print();

	cout << "Double Queue\n\n";

	Queue<double> doubleQ(10);

	doubleQ.enqueue(1.1);
	doubleQ.enqueue(2.1);
	doubleQ.enqueue(3.1);
	doubleQ.enqueue(4.1);
	doubleQ.enqueue(5.1);
	doubleQ.enqueue(6.1);
	doubleQ.print();
	cout << "Front value is " << doubleQ.front() << endl;

	doubleQ.dequeue();
	doubleQ.dequeue();
	doubleQ.dequeue();
	doubleQ.dequeue();
	doubleQ.print();
	cout << "Front value is " << doubleQ.front() << endl;

	doubleQ.enqueue(7.1);
	doubleQ.enqueue(8.1);
	doubleQ.enqueue(9.1);
	doubleQ.enqueue(10.1);
	doubleQ.enqueue(11.1);
	doubleQ.print();

	doubleQ.dequeue();
	doubleQ.dequeue();
	doubleQ.dequeue();
	intQ.print();


	cout << "String Queue\n\n";

	Queue<string> stringQ(10);

	stringQ.enqueue("one");
	stringQ.enqueue("two");
	stringQ.enqueue("three");
	stringQ.enqueue("four");
	stringQ.enqueue("five");
	stringQ.enqueue("six");
	stringQ.print();
	cout << "Front value is " << stringQ.front() << endl;

	stringQ.dequeue();
	stringQ.dequeue();
	stringQ.dequeue();
	stringQ.dequeue();
	stringQ.print();
	cout << "Front value is " << stringQ.front() << endl;

	stringQ.enqueue("seven");
	stringQ.enqueue("eight");
	stringQ.enqueue("nine");
	stringQ.enqueue("ten");
	stringQ.enqueue("eleven");
	stringQ.print();

	stringQ.dequeue();
	stringQ.dequeue();
	stringQ.dequeue();
	stringQ.print();

	return 0;
}
