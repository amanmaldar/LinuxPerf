# LinuxPerf


Compilation with gdb. We need symbol table as well.  <br />
Symbols: -O0 = bigO, zero 
`g++ -std=c++11 -ggdb  –O0 –g main.cpp -o linuxPerf`

This command automatically creates default file perf.data <br />
`sudo perf record -g -e cpu-clock,faults ./linuxPerf` 
`perf report`
Sumbols: -g = hirarchical profiling

`perf report -G`
`perf report`

Ref: https://stackoverflow.com/questions/27742462/understanding-linux-perf-report-output?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa <br />

Note: hirarchical profiling is not correct here. Remove -g from perf record. <br />