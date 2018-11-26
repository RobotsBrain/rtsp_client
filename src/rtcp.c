#include "rtsp_cli.h"
#include "rtcp.h"
#include "log.h"


int handle_rtcp_pkt(struct rtsp_sess *sessp, enum media_type media,
                    char *data, unsigned int sz)
{
    printd(DEBUG "------------------- rtcp pkt --------->\n");

    return 0;
}
