find . -type f -name "*.sh"| sed 's/.sh$//g' | rev |awk -F "/" '{print$1}' |rev
