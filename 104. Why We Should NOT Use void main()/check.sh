#!/bin/sh
for i in 1 2 3 4 5 6 7 8 9 10
do
  result=$(./void_main $i)
  if [ $? -eq 0 ] 
  then echo $i is even
  else echo $i is odd 
  fi
done
result=$(./void_main 4 abc)
if [ $? -eq 2 ] 
then echo "invalid arguments"
fi