#ifndef __PARSER_H__
#define __PARSER_H__


int parse_rtsp_resp(struct rtsp_sess *sessp, struct rtsp_resp *resp,
                    const char *msg, unsigned int sz);


#endif /* __PARSER_H__ */

