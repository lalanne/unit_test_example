
#ifndef STACK_83H938HF98WHEF9HF
#define STACK_83H938HF98WHEF9HF

#include "EmptyStackException.hpp"

#include <list>

template<typename T>
class Stack{
    public:
        Stack(unsigned int size) : _size(size){}
        Stack() : _size(100){}

        void push(T item){
            stack.push_back(item);
        }
        T pop(){
            if(!stack.size()) throw EmptyStackException();
            T tmp = stack.back();
            stack.pop_back();
            return tmp;
        }

    private:
        std::list<T> stack;
        const unsigned _size;
};

#endif //STACK_83H938HF98WHEF9HF
