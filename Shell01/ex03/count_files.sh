#!/bin/sh
find . -trpe f -o -type d | wc -1 | sed 's/ //g'
