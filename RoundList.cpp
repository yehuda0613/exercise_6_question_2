//
// Created by yehud on 03/05/2022.
//
#include <iostream>
#include "RoundList.h"

using namespace std;

RoundList::RoundList() : List() {
}

RoundList::~RoundList() {
    clear();
}

void RoundList::add(int val){//קוד של יהודה
    if(head == nullptr)//לטפל במספר הראשון
    {
        head = new Link(val, head);
        //cout << "*\n";
        head->next = head;
        return;
    }
    Link * newNode = new Link(val, head->next);
    head->next = newNode;
}

int RoundList::search(int n) {//קוד של יוני
    if(head == nullptr) return -1;
    Link* temp = head;
    for(int i = 0; i < n - 1; i++){
        temp = temp->next;
    }
    return temp->value;
}

void RoundList::addToEnd(int val) {//קוד של יהודה
    if(head == nullptr) {
        add(val);
        return;
    }
    Link * newNode = new Link(val, head->next);
    head->next = newNode;
    head = newNode;
}

void RoundList::clear()
{
    List::clear();///********************
}

void RoundList::removeFirst() {
//    if the list is empty
    if(head == nullptr) {
        return;
//        if the list as only one element
    } else if(head == head->next) {
        delete head;
        head = nullptr;
        return;
    }

    Link * ptr = head;
    Link * next;
    do {
        ptr = ptr->next;
    } while(ptr != head);

    next = ptr->next;
    ptr->next = ptr->next->next;
    delete next;
}//דניאל

ostream &operator<<(ostream &os, const RoundList &a) {
//    if the list is empty
    if(a.head == nullptr) {
        return os;
    }
    RoundList::Link * ptr = a.head->next;
    if(a.head != nullptr) {
        do {
            os << ptr->value << " ";
            ptr = ptr->next;
        } while(ptr != a.head->next);
    }
    return os;
}//דניאל

