#!/bin/bash
echo There were $# parameters passed
av=0
for param in "$@"
do
av=$[$av+$param]
done
a=$[$av/$#]
echo average = $a