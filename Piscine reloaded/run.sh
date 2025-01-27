#!/bin/bash

STRING=$(norminette "$1")

IFS=' '
read -ra RESULT <<< "$STRING"

if [[ "${RESULT[1]}" == "OK!" ]]; then
    cc -Wall -Wextra -Werror "$1"
    if [[ $? -eq 0 ]]; then
        ./a.out
    else
        echo "Erro na compilação."
    fi
else
    echo "$STRING"
fi