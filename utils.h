#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")

struct msg{
    float T;     // Temperature 
    int Index;    // Index indifying the process 
}; 

struct msg prepare_message(int i_Index, float i_Temperature); 

