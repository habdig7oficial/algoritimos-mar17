for i in $(seq 1 11);
do
    gcc ex$i.c -o ex$i.mac;
    ./ex$i.mac;
done