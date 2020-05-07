#pragma once

enum Instruction {
    INST_LITERAL     = 0x00,
    INST_SET_HEALTH  = 0x01,
    INST_SET_WISDOM  = 0x02,
    INST_SET_AGILITY = 0x03,
    INST_GET_HEALTH  = 0x04,
    INST_GET_WISDOM  = 0x05,
    INST_GET_AGILITY = 0x06,
    INST_ADD         = 0x07,
    INST_MINUS       = 0x08,
    INST_TIMES       = 0x09,
    INST_DIVID       = 0x0A
};