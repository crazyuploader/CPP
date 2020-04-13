#!/usr/bin/env bash

# Colors
GREEN="\033[1;32m"
NC="\033[0m"
YELLOW="\033[1;33m"
MAGENTA="\033[1;35m"

clear
echo -e "${GREEN}Compiling with G++ ${NC}"
echo ""
for f in *.cpp; do echo "Compiling '${f}'"; g++ "${f}"; done
echo ""
echo -e "${YELLOW}" "In Directory Practical_File/* ${NC}"
echo ""
for f in Practical_File/*.cpp; do echo "Compiling '${f}'"; g++ "${f}"; done
echo ""
echo -e "${YELLOW}" "In Directory Practical_File/concat/* ${NC}"
echo ""
for f in Practical_File/concat/*.cpp; do echo "Compiling '${f}'"; g++ "${f}"; done
echo ""
echo -e "${GREEN}Compiling with Clang++ ${NC}"
echo ""
for f in *.cpp; do echo "Compiling '${f}'"; clang++ "${f}"; done
echo ""
echo -e "${YELLOW}" "In Directory Practical_File/* ${NC}"
echo ""
for f in Practical_File/*.cpp; do echo "Compiling '${f}'"; clang++ "${f}"; done
echo ""
echo -e "${YELLOW}" "In Directory Practical_File/concat/* ${NC}"
echo ""
for f in Practical_File/concat/*.cpp; do echo "Compiling '${f}'"; clang++ "${f}"; done
echo ""
echo -e "${MAGENTA}Done! ${NC}"
