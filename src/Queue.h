#pragma once

#include"Object.h"

namespace JYLib
{

template <typename T>
class Queue : public Object
{
public:
    virtual void add(const T& e) = 0;
    virtual void remove() = 0;
    virtual T front() const  = 0;
    virtual void clear() = 0;
    virtual int length() const = 0;
};

}
