/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TN_PACKAGE_NAME_TEST_TYPES_H
#define TN_PACKAGE_NAME_TEST_TYPES_H

/* base includes */
#include <thrift-nano/thrift_nano.h>

/* custom thrift includes */

#ifdef __cplusplus
extern "C" {
#endif
/* begin types */

/* struct structb */
typedef struct 
{ 
  tn_struct_t parent; 
  tn_buffer_t * strprop;
  int8_t v1;
  bool has_v1;
  int8_t v2;
  bool has_v2;
  int8_t v3;
  bool has_v3;
  int32_t v4;
  bool has_v4;
  tn_buffer_t * v5;
} tn_package_name_structb_t;
tn_package_name_structb_t* tn_package_name_structb_init(tn_package_name_structb_t*);
tn_package_name_structb_t* tn_package_name_structb_create(tn_error_t *);
/* struct structa */
typedef struct 
{ 
  tn_struct_t parent; 
  tn_buffer_t * strprop;
  tn_package_name_structb_t * structprop;
  tn_list_t * listprop;
  tn_map_t * mapprop;
} tn_package_name_structa_t;
tn_package_name_structa_t* tn_package_name_structa_init(tn_package_name_structa_t*);
tn_package_name_structa_t* tn_package_name_structa_create(tn_error_t *);
/* constants */

#ifdef __cplusplus
}
#endif
#endif /* TN_PACKAGE_NAME_TEST_TYPES_H */
