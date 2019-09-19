#!/bin/bash

if [ -d wine ]
then
   cd wine
   git pull
   cd ..
else
   git clone git://source.winehq.org/git/wine.git
fi

