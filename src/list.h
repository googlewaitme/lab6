//
// Created by bulat on 23.11.22.
//

#pragma once
#ifndef LAB6_LIST_H
#define LAB6_LIST_H

template <typename T>
struct Node
{
	T data;
	Node *next;
};

template <typename T>
class List
{
private:
	Node<T>* _head;
	int _size = 0;

public:
	List();
    void push(T val);
    T pop();
    void set_value(int idx, T value);
	T& operator [](int idx);
	void print_data();
};

#include "list.cpp"
#endif //LAB6_LIST_H
