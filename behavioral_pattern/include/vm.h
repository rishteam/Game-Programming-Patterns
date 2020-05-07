#pragma once

# include "instruction.h"
# include "wizard.h"

class VM {
public:
    VM();
    void interpret(char bytecode[], int size);
    void showStack();


private:

    void push(int val){
        // assert (m_stackSize < MAX_STACK);
        m_stack[m_stackSize++] = val;
    }
    int pop(){
        // assert (m_stackSize > 0 );
        return m_stack[--m_stackSize];
    }

    static const int MAX_STACK = 128;
    int m_stackSize;
    int m_stack[MAX_STACK];

    Wizards m_wizard;

};
