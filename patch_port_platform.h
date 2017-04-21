--- bazel-tensorflow-20.04.2016//external/grpc/include/grpc/impl/codegen/port_platform.h	2016-08-23 15:37:07.000000000 +0000
+++ bazel-tensorflow-20.04.2016//external/grpc/include/grpc/impl/codegen/port_platform.h-from	2017-04-20 21:14:03.768047000 +0000
@@ -131,7 +131,7 @@
 #define GPR_POSIX_SOCKETUTILS 1
 #define GPR_SUPPORT_CHANNELS_FROM_FD 1
 #define GPR_HAVE_UNIX_SOCKET 1
-#define GPR_HAVE_IP_PKTINFO 1
+//#define GPR_HAVE_IP_PKTINFO 1
 #define GPR_HAVE_IPV6_RECVPKTINFO 1
 #define GPR_LINUX_ENV 1
 #define GPR_POSIX_FILE 1
@@ -176,7 +176,7 @@
 #define GPR_SUPPORT_CHANNELS_FROM_FD 1
 #define GPR_HAVE_MSG_NOSIGNAL 1
 #define GPR_HAVE_UNIX_SOCKET 1
-#define GPR_HAVE_IP_PKTINFO 1
+//#define GPR_HAVE_IP_PKTINFO 1
 #define GPR_HAVE_IPV6_RECVPKTINFO 1
 #elif defined(__linux__)
 #define GPR_POSIX_CRASH_HANDLER 1
@@ -202,7 +202,7 @@
 #define GPR_POSIX_SOCKETADDR 1
 #define GPR_SUPPORT_CHANNELS_FROM_FD 1
 #define GPR_HAVE_UNIX_SOCKET 1
-#define GPR_HAVE_IP_PKTINFO 1
+//#define GPR_HAVE_IP_PKTINFO 1
 #define GPR_HAVE_IPV6_RECVPKTINFO 1
 #ifdef __GLIBC_PREREQ
 #if __GLIBC_PREREQ(2, 9)
@@ -269,7 +269,7 @@
 #define GPR_SUPPORT_CHANNELS_FROM_FD 1
 #define GPR_HAVE_SO_NOSIGPIPE 1
 #define GPR_HAVE_UNIX_SOCKET 1
-#define GPR_HAVE_IP_PKTINFO 1
+//#define GPR_HAVE_IP_PKTINFO 1
 #ifdef _LP64
 #define GPR_ARCH_64 1
 #else /* _LP64 */
@@ -301,7 +301,7 @@
 #define GPR_SUPPORT_CHANNELS_FROM_FD 1
 #define GPR_HAVE_SO_NOSIGPIPE 1
 #define GPR_HAVE_UNIX_SOCKET 1
-#define GPR_HAVE_IP_PKTINFO 1
+//#define GPR_HAVE_IP_PKTINFO 1
 #define GPR_HAVE_IPV6_RECVPKTINFO 1
 #ifdef _LP64
 #define GPR_ARCH_64 1
