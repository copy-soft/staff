for fil in $(echo $(  for file in $(ldd $1 |grep "not found")
do
echo "$file" | grep '.so' ;
done)); do find / -name $fil; done
