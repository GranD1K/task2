#include<iostream>
#ifndef OOP_H
#define OOP_H

class Base{
public:
    Base(); 
    ~Base();
    virtual void func() const; 
};

class Child: public Base{ 
public:
    Child();
    ~Child();
    void func() const;
};

void Function(const Base &obj);

#endif