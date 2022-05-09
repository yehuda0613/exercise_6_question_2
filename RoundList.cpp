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

