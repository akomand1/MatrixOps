cd tests
./make_clean.sh
./make.sh
for i in ./*.exe
do
  ./$i
  if [ $? == 0 ]; then
    echo $i PASS
  else
    echo $i FAIL
  fi
done
