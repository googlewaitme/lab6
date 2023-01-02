#include <iostream>


template<typename T>
List<T>::List() {
	_head = nullptr;
};


template <typename T>
void List<T>::push(T val){
	_size++;
	if (_head == nullptr) {
		_head = new Node<T>();
		_head->data = val;
		return;
	}
	Node<T> *temp = _head;
    while (temp->next) {
    	temp = temp->next;
    }
    Node<T> *n = new Node<T>();
    n->data=val;
    n->next = nullptr;
    temp->next = n;
}

template <typename T>
T List<T>::pop(){
  if(_head) {
    T p = _head->data;
    _head = _head->next;
    _size--;
    return p;
  }
}

template <typename T>
void List<T>::set_value(int idx, T value) 
{
	Node<T> *temp = _head;
    int index = 0;
    while (temp->next) {
    	if (index == idx) {
    		temp->data = value;
    		return;
    	} else {
    		temp = temp->next;
    	}
    	index++;
    }
    temp->data = value;
}

template <typename T>
T& List<T>::operator[](int idx)
{
	Node<T> *temp = _head;
    int index = 0;
    while (temp->next) {
    	if (index == idx) {
    		return temp -> data;
    	} else {
    		temp = temp->next;
    	}
    	index++;
    }
    return temp -> data;
}

template <typename T>
void List<T>::print_data() 
{
	Node<T> *temp = _head;
	while(temp->next) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	if (temp != nullptr) 
		std::cout << temp->data << std::endl;
}

