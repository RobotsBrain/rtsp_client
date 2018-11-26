#ifndef __SD_HANDLER_H__
#define __SD_HANDLER_H__


typedef int (*sd_handler_t)(int sd, int ev, void *arg);

/* Each sock is embedded into this struct. */
struct sock {
    int sd;
    int ev;
    sd_handler_t handler;
    void *arg;
};

int handle_rtsp_sd(int sd, int ev, void *arg);
int handle_rtp_sd(int sd, int ev, void *arg);
int handle_rtcp_sd(int sd, int ev, void *arg);

struct rtsp_sess;
int do_sd_handler(int sd, int ev, struct rtsp_sess *sessp);

#endif /* __SD_HANDLER_H__ */

