# LinuxPerf


Compilation with gdb. We need symbol table as well. <br />
`g++ -std=c++11 -ggdb main.cpp -o linuxPerf`

This command automatically creates default file perf.data <br />
`sudo perf record -e cpu-clock,faults ./linuxPerf` 
`perf report`


