/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2012-2018, The Linux Foundation. All rights reserved.
 */
#ifndef _MSM_VENC_H_
#define _MSM_VENC_H_

#include "msm_vidc.h"
#include "msm_vidc_internal.h"
#define MSM_VENC_DVC_NAME "msm_vidc_venc"

int msm_venc_inst_init(struct msm_vidc_inst *inst);
int msm_venc_ctrl_init(struct msm_vidc_inst *inst,
	const struct v4l2_ctrl_ops *ctrl_ops);
int msm_venc_enum_fmt(void *instance, struct v4l2_fmtdesc *f);
int msm_venc_s_fmt(void *instance, struct v4l2_format *f);
int msm_venc_s_ctrl(void *instance, struct v4l2_ctrl *ctrl);

#endif