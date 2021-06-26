for i in ./*.cpp
do
  g++ -std=c++11 $i -o `basename $i .cpp`".exe" -lm
done
