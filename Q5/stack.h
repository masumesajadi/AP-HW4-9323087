#ifndef STACK_H
#define STACK_H

#include<iostream>
#include"ctext.h"

template<class T>
class Stack {
  
  class CItem;     //Forward decleration

  class CItem {
   public:
    T pT;
    CItem* pNext;
    CItem(T pA, CItem* pB): pT{pA}, pNext{pB} {};
  };

  CItem* pTop{};

 public:
  Stack() = default;
  Stack(const Stack&) = delete;
  Stack& operator=(const Stack&) = delete;
  virtual ~Stack();

  void push(T);
  T pop();
  int getCount();
  bool isEmpty();
};

#include"stack.hpp"

#endif
