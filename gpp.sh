echo "Compiling with G++"
echo ""
for f in $(ls *.cpp); do echo "Compiling $f"; g++ $f; done
echo ""
echo "Compiling Practical_File/*"
echo ""
for f in $(ls Practical_File/*.cpp); do echo "Compiling $f"; g++ $f; done
echo ""
echo "Build with G++ OK"
echo ""
