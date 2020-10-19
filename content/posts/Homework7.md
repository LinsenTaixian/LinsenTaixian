# Homework
1. Program with machine language according to the following c. int_8 a = 1; int_8 c = a + 3;
    1. Write your assembly code & machine code
    1. Explain machine code execution with the fetch-decode-execute cycle
    3. Explain functions about IR, PC, ACC registers in a CPU
    4. Explain physical meaning about vars a & c in a machine
2. 简答题
    1. What are stored in memory?
    2. Can a data or a instruction stored in the same place?
    3. Explain Instruction Format with example instructions.
3. 解释以下词汇
    1. 汇编语言（Assembly Language）
    2. 编译（Compiler）
    3. 命令式语言（Imperative programming）
    4. 函数编程语言（Functional programming）
    5. 过程式编程（Procedural programming）


解
1. 如下:
    1. LOD #1 –> STO X –> LOD X –> ADD #3 –> STO Y –> HLT

    1. Main memory –> fetch instruction –> Decode instruction –>Registers –>Get data –>Execute the instruction –> Main memory

    1. 
        * IR：指令寄存器，用来保存当前正在执行的一条指令

        * PC：程序计数器，存放下一条指令在内存中的地址   
    
        * ACC：累加寄存器，功能是当运算器的算术逻辑单元(ALU)执行全部算术和逻辑运算时，为ALU提供一个工作区，暂时存放ALU运算结果
1. 如下    
    1. 即机器中的一个内存地址
    1. 二进制的机器指令和数据
    1. ADD X :00000000 10000000 前八位称命令指示，第四位为寻址模式，例子中为0，表示操作数是该地址的内容；后八位是操作数，表示数值或地址，例子中表示内存中地址128。整个例子表示加上将内存地址128中的数据
1. 如下:
    1. In computer programming, assembly language (or assembler language), often abbreviated asm, is any low-level programming language in which there is a very strong correspondence between the instructions in the language and the architecture's machine code instructions.
    1. In computing, a compiler is a computer program that translates computer code written in one programming language (the source language) into another language (the target language)
    1. In computer science, imperative programming is a programming paradigm that uses statements that change a program's state
    1. In computer science, functional programming is a programming paradigm where programs are constructed by applying and composing functions. 
    1. Procedural programming is a programming paradigm, derived from structured programming, based on the concept of the procedure call.