#pragma once

/** \file deloader.h
 * Depth Engine Loader
 * Stub layer to abstract away the dynamic loading of the depth engine from our
 * developers usage
 */

#include <k4a/k4aplugin.h>

#ifdef __cplusplus
extern "C" {
#endif

k4a_depth_engine_result_code_t destub_depth_engine_create_and_initialize(k4a_depth_engine_context_t **context,
                                                                         size_t cal_block_size_in_bytes,
                                                                         void *cal_block,
                                                                         k4a_depth_engine_mode_t mode,
                                                                         k4a_depth_engine_input_type_t input_format,
                                                                         void *camera_calibration,
                                                                         k4a_processing_complete_cb_t *callback,
                                                                         void *callback_context);

k4a_depth_engine_result_code_t
destub_depth_engine_process_frame(k4a_depth_engine_context_t *context,
                                  void *input_frame,
                                  size_t input_frame_size,
                                  k4a_depth_engine_output_type_t output_type,
                                  void *output_frame,
                                  size_t output_frame_size,
                                  k4a_depth_engine_output_frame_info_t *output_frame_info,
                                  k4a_depth_engine_input_frame_info_t *input_frame_info);

size_t destub_depth_engine_get_output_frame_size(k4a_depth_engine_context_t *context);

void destub_depth_engine_destroy(k4a_depth_engine_context_t **context);

#ifdef __cplusplus
}
#endif