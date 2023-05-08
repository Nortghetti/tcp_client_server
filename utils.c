#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <winsock2.h>
#include "utils.h"
#pragma comment(lib, "ws2_32.lib")


struct msg prepare_message(int i_Index, float i_Temperature)
{
    struct msg message; 

    message.Index = i_Index; 
    message.T = i_Temperature; 

    return message;
}


