#!/bin/bash
ID=`id | awk -F '=' '{print $2}'|awk -F '(' '{print $1}'`

echo $ID

