/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_praseodym_activelearner_ForkServer */

#ifndef _Included_net_praseodym_activelearner_ForkServer
#define _Included_net_praseodym_activelearner_ForkServer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_praseodym_activelearner_ForkServer
 * Method:    hello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_praseodym_activelearner_ForkServer_hello
  (JNIEnv *, jobject);

/*
 * Class:     net_praseodym_activelearner_ForkServer
 * Method:    pre
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_net_praseodym_activelearner_ForkServer_pre
  (JNIEnv *, jobject, jstring);

/*
 * Class:     net_praseodym_activelearner_ForkServer
 * Method:    run
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_net_praseodym_activelearner_ForkServer_run
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     net_praseodym_activelearner_ForkServer
 * Method:    post
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_praseodym_activelearner_ForkServer_post
  (JNIEnv *, jobject);

/*
 * Class:     net_praseodym_activelearner_ForkServer
 * Method:    getQueuedDiscovered
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_praseodym_activelearner_ForkServer_getQueuedDiscovered
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
