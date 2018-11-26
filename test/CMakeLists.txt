set(EXECUTABLE_OUTPUT_PATH ${OUTDIR}/test)

include_directories(
    ${TOPDIR}/include/
    ${TOPDIR}/src
)

link_directories(
)


#################################
#add_executable(test_rtp test_rtp.c)
#target_link_libraries(test_rtp rtsp)


#################################
#add_executable(test_sdp test_sdp.c)
#target_link_libraries(test_sdp rtsp)


#################################
#add_executable(test_rtsp test_rtsp.c)
#target_link_libraries(test_rtsp rtsp)


#################################
#add_executable(rtp_server rtp_server.c)
#target_link_libraries(rtp_server rtsp)


#################################
add_executable(test_rtsp_client test_rtsp_client.c)
target_link_libraries(test_rtsp_client rtsp pthread)




