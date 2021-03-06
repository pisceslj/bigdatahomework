/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_WM_2ecurss_5ffinish_2eproto__INCLUDED
#define PROTOBUF_C_WM_2ecurss_5ffinish_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _Wm__CurssFinish Wm__CurssFinish;


/* --- enums --- */


/* --- messages --- */

struct  _Wm__CurssFinish
{
  ProtobufCMessage base;
  int32_t s_id;
  int32_t d_id;
  int32_t superstep;
  int64_t compute;
  int64_t recv_msg;
  int64_t sent_msg;
  size_t n_worker_msg;
  int64_t *worker_msg;
  int64_t act_vertex;
  size_t n_aggr_local;
  ProtobufCBinaryData *aggr_local;
};
#define WM__CURSS_FINISH__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wm__curss_finish__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0,NULL, 0, 0,NULL }


/* Wm__CurssFinish methods */
void   wm__curss_finish__init
                     (Wm__CurssFinish         *message);
size_t wm__curss_finish__get_packed_size
                     (const Wm__CurssFinish   *message);
size_t wm__curss_finish__pack
                     (const Wm__CurssFinish   *message,
                      uint8_t             *out);
size_t wm__curss_finish__pack_to_buffer
                     (const Wm__CurssFinish   *message,
                      ProtobufCBuffer     *buffer);
Wm__CurssFinish *
       wm__curss_finish__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wm__curss_finish__free_unpacked
                     (Wm__CurssFinish *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Wm__CurssFinish_Closure)
                 (const Wm__CurssFinish *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor wm__curss_finish__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_WM_2ecurss_5ffinish_2eproto__INCLUDED */
