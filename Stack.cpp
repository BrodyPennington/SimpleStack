#include <iostream>
#include "Stack.h"


    void Stack::push(int data) {
        front = new Node(data, front);
    }

    bool Stack::pop() {
        if (front == nullptr) {
            return false;
        }

        Node *tmp = front;
        front = front->next;
        delete tmp;
        return true;
    }

    bool Stack::peek(int &data) {
        if (front == nullptr) {
            return false;
        }

        data = front->data;
        return true;
    }

    void Stack::display(std::ostream &os) {
        Node *tmp = front;
        os << "top(front)->     ";
        while (tmp != nullptr) {
            os << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << "      <-tail(rear)" << std::endl;
    }