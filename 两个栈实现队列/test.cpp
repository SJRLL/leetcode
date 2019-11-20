#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;

class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		InputStack.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		while (!InputStack.empty())
		{
			OutputStack.push(InputStack.top());
			InputStack.pop();
		}
		int top = OutputStack.top();
		OutputStack.pop();

		while (!OutputStack.empty())
		{
			InputStack.push(OutputStack.top());
			OutputStack.pop();
		}
		return top;
	}

	/** Get the front element. */
	int peek() {
		while (!InputStack.empty())
		{
			OutputStack.push(InputStack.top());
			InputStack.pop();
		}
		int top = OutputStack.top();
		while (!OutputStack.empty())
		{
			InputStack.push(OutputStack.top());
			OutputStack.pop();
		}
		return top;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		if (InputStack.empty() && OutputStack.empty())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	stack<int> OutputStack;
	stack<int> InputStack;
};

