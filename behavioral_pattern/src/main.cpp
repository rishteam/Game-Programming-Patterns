#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <imgui.h>
#include <imgui-SFML.h>

#include "vm.h"


int main()
{
    char bytecode[] = {
        INST_LITERAL, 0,
        INST_LITERAL, 0,
        INST_GET_HEALTH,
        INST_LITERAL, 0,
        INST_GET_AGILITY,
        INST_LITERAL, 0,
        INST_GET_WISDOM,
        INST_ADD,
        INST_LITERAL, 2,
        INST_DIVID,
        INST_ADD,
        INST_SET_HEALTH
    };
    int bytecodeSize = 17;

    VM VM_test;

    char bytecode2[] = {
        INST_LITERAL, 3,
            INST_LITERAL, 0,
            INST_LITERAL, 0,
            INST_GET_HEALTH,
            INST_LITERAL, 0,
            INST_GET_AGILITY,
            INST_LITERAL, 0,
            INST_GET_WISDOM,
            INST_ADD,
            INST_LITERAL, 2,
            INST_DIVID,
            INST_ADD,
            INST_SET_HEALTH,
        INST_JUMP,  -18
    };
    int bytecodeSize2 = 21;

    // VM_test.interpret(bytecode,bytecodeSize);
    VM_test.interpret(bytecode2, bytecodeSize2);

}