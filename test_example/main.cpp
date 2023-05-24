#include <stdio.h>
#include "rslogger_declare.h"
#include "rslogging.h"



int main(int argc, char *argv[])
{
    g_RsLog.setLogLevel(ERsLogLevel::RS_LOG_DEBUG);
    RSLOG_DEBUG << "servicees start!";
    RSLOG_DEBUG << "exit main....";

    printf("Hello word!\n");


    return 0;
}
