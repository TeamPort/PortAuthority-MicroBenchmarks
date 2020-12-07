#!/usr/bin/python

import sys, getopt

def printOpcode(iterations, opcodes):
    for i in range(512/len(opcodes)):
        for opcode in opcodes:
            print "        asm(\"" + opcode + "\");"

def main(argv):
    iterations = 30000000
    opcodes = ["mov %rdx, %rdx", "mov %rbx, %rbx"]
    try:
        opts, args = getopt.getopt(argv,"hvi:")
    except getopt.GetoptError:
        print sys.argv[0] + " -h, -v, -i"
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print sys.argv[0] + " -h, -v, -i"
            sys.exit()
        elif opt == '-v':
            print '0.0.1'
            sys.exit()
        elif opt == '-i':
            iterations = arg

    print "int i = {0};".format(iterations)
    print("\n"
        "int main()\n"
        "{\n"
        "    do{")
    printOpcode(iterations, opcodes)
    print("    }while(i--);\n"
        "}\n")

if __name__ == "__main__":
    main(sys.argv[1:])
