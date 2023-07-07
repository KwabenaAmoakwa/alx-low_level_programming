#!/bin/bash

for f in *.c
do

baseName=`echo $f | cut -d "." -f 1`
newExtension=".o"

cp $f $baseName$newExtension

done

ar rcs liball.a | find . -type f -name "*.o"
