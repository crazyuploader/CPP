for f in $(ls *.cpp); do echo "Compiling $f"; clang++ $f; done && \
for f in $(ls Practical_File/*.cpp); do echo "Compiling $f"; g++ $f; done && \
for f in $(ls Practical_File/concat/*.cpp); do echo "Compiling $f"; g++ $f; done
clear