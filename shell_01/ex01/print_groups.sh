#!/bin/sh
id $FT_USER -G -n | tr ' ' ',' | tr -d "\n" | cat -e 
