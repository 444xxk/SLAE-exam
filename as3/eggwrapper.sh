#!/bin/bash
print "Usage: $0 eggcode shellcodefile.nasm"
eggcode="";
cwd=$(pwd);

echo "this script will output the selected egg append to the shellcode selected" ;

echo -n "$1";
objdump -d ./"$2" | grep '[0-9a-f]:'|grep -v 'file'|cut -f2 -d:|cut -f1-6 -d' '|tr -s ' '|tr '\t' ' '|sed 's/ $//g'|sed 's/ /\\x/g'|paste -d '' -s |sed 's/^/"/'|sed 's/$/"/g';
