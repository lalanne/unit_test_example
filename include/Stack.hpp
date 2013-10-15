
#ifndef STACK_83H938HF98WHEF9HF
#define STACK_83H938HF98WHEF9HF

#include <list>

template<typename T>
class Stack{
    public:
        void push(T item){
            stack.push_back(item);
        }
        T pop(){
            return stack.back()
        }

    private:
        std::list<T> stack;
};

#endif //STACK_83H938HF98WHEF9HF


