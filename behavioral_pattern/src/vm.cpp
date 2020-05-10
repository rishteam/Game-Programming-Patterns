#include <iostream>
#include "vm.h"

VM::VM(){
    m_stackSize = 0;
}

void VM::interpret(char bytecode[], int size){
    m_wizard.showData(0);
    showStack();
    for(int i = 0 ; i < size ; ++i ){
        char instruction = bytecode[i];
        switch (instruction){
            
            case INST_LITERAL:{
                int value = bytecode[++i];
                push(value);
                break;
            }

            case INST_SET_HEALTH:{
                int amount = pop();
                int wizard = pop();
                m_wizard.setHealth(wizard,amount);
                break;
            }

            case INST_SET_WISDOM:{
                int amount = pop();
                int wizard = pop();
                m_wizard.setWisdom(wizard, amount);
                break;
            }

            case INST_SET_AGILITY:{
                int amount = pop();
                int wizard = pop();
                m_wizard.setAgility(wizard, amount);
                break;
            }

            case INST_GET_HEALTH:{
                int wizard = pop();
                push( m_wizard.getHealth(wizard) );
                break;
            }

            case INST_GET_WISDOM:{
                int wizard = pop();
                push(m_wizard.getWisdom(wizard));
                break;
            }

            case INST_GET_AGILITY:{
                int wizard = pop();
                push(m_wizard.getAgility(wizard));
                break;
            }

            case INST_ADD:{
                int b = pop();
                int a = pop();
                push( a+b );
                break;
            }

            case INST_MINUS:{
                int b = pop();
                int a = pop();
                push(a - b);
                break;
            }

            case INST_TIMES:{
                int b = pop();
                int a = pop();
                push(a * b);
                break;
            }

            case INST_DIVID:{
                int b = pop();
                int a = pop();
                push(a / b);
                break;
            }

            case INST_JUMP:{
                int value = bytecode[++i];
                int cnt = pop() - 1;
                if (cnt > 0){
                    i += (value - 1);
                    push(cnt);
                }
                break;
            }

            default:
                break;
        }
        showStack();
    }
    m_wizard.showData(0);
}

void VM::showStack(){
    printf("[");
    for(int i = 0 ; i < m_stackSize ; i++ )
        printf("%2d%c",m_stack[i],i==m_stackSize-1?']':',');
    printf("\n");
}