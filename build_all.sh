#!/usr/bin/env bash

echo ""
echo "Compiling with G++"
echo ""
for f in *.cpp; do echo "Compiling $f"; g++ "$f"; done
echo ""
echo "Compiling Practical_File/*"
echo ""
for f in Practical_File/*.cpp; do echo "Compiling $f"; g++ "$f"; done
echo ""
echo "Compiling Practical_File/concat/*"
echo ""
for f in Practical_File/concat/*.cpp; do echo "Compiling $f"; g++ "$f"; done
echo ""
echo ""
echo "Compiling with Clang++"
echo ""
for f in *.cpp; do echo "Compiling $f"; clang++ "$f"; done
echo ""
echo "Compiling Practical_File/*"
echo ""
for f in Practical_File/*.cpp; do echo "Compiling $f"; clang++ "$f"; done
echo ""
echo "Compiling Practical_File/concat/*"
echo ""
for f in Practical_File/concat/*.cpp; do echo "Compiling $f"; clang++ "$f"; done
echo ""
