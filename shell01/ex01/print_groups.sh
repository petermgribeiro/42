#!/bin/bash

FT_USER_GROUPS=$(id -Gn $FT_USER | tr ' ' ',')
echo $FT_USER_GROUPS
