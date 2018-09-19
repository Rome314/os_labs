while ! ln ex2.txt ex2.lock

do
    sleep 1
done 
echo 0 > ex2.txt
while read p 
do
    echo $(($p + 1)) >> ex2.txt
    sleep 1
done < ex2.txt
do
    rm ex2.lock
done
