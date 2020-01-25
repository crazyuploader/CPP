#!/usr/bin/env bash

echo "Clearing Object Files and Executable Files"
rm -r '*.exe' '*.o' '*.out'
echo "Done!"
sleep .5
clear
echo "Available Files -"
for f in *.cpp; do echo "$f"; done
echo ""
echo "Enter File Name -- Without Extension"
read -r fname
if [[ -f ${fname}.cpp ]]; then
    echo "What do you want to compile it with?"
    echo "Clang++ or G++"
    echo "Enter '1' for Clang++ and '2' for G++"
    read -r temp
    COMPILED_PROGRAM=a.out
    if [[ $temp = "1" ]]; then
        clear
        echo "Compiling "$fname.cpp" with Clang++"
        clang++ "$fname.cpp"
        if [[ -f ${COMPILED_PROGRAM} ]]; then
            echo ""
            echo "Build With Clang++ without any errors"
            sleep .5
            clear
        else
            echo ""
            echo "Check the Program Please"
            sleep 5
            clear
            exit
        fi
    else
        if [[ $temp = "2" ]]; then
            clear
            echo "Compiling "$fname.cpp" with G++"
            g++ "$fname.cpp"
            if [[ -f ${COMPILED_PROGRAM} ]]; then
                echo ""
                echo "Build With G++ without any errors"
                sleep .5
                clear
            else
                echo ""
                echo "Check the Program Please"
                sleep 5
                clear
                exit
            fi
        else
            if [ "$temp" != "1" ] && [ "$temp" != "2" ]; then
                echo "Wrong Compiler"
                echo "Exiting!"
                sleep 1
                clear
                exit
            fi
        fi
    fi
else
    echo "File Does not Exist!"
    echo "Exiting..."
    sleep 1
    clear
    exit
fi
echo "Running Compiled Program Now"
sleep 1
clear
./a.out
echo ""
echo "Show Source Code?"
echo ""
echo "'y' for yes and anything else for no"
read -r temp
if [[ $temp = "y" ]]; then
    clear
    cat ${fname}.cpp
    sleep 5
    echo ""
    echo "Press 'y' to Exit"
    read -r temp
    if [[ $temp = "y" ]]; then
        clear
        sleep 3
        echo "K Thanks, Bye!"
        exit
    fi
else
    if [[ $temp != "y" ]]; then
        clear
        echo "K Thanks, Bye!"
        sleep 2
        exit
    fi
fi