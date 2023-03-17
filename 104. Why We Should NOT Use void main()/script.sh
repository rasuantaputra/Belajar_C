#!/bin/bash
result1=$(diff file1.txt file2.txt)
if [ $? -eq 0 ]
then echo file1 file2 match success
else echo file1 file2 match fail
fi
result2=$(diff f1.txt f3.txt)
if [ $? -eq 0 ]
then echo file1 file3 match success
else echo file1 file3 match fail
fi
*