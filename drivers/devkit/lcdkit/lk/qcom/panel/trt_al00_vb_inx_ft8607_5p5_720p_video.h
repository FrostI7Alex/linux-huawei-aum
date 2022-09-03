/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_H_

#define _PANEL_TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config trt_al00_vb_inx_ft8607_5p5_720p_video_panel_data = {
        "lcdkit_trt_al00_vb_inx_ft8607_5p5_720p_video", "dsi:0:", "inx_ft8607_5p5_720p_video", 
        10, 0, "DISPLAY_1", 0, 490020000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution trt_al00_vb_inx_ft8607_5p5_720p_video_panel_res = {
        720, 1280, 57, 50, 4, 0, 294, 60, 4, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info trt_al00_vb_inx_ft8607_5p5_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd1[] = {
    0x53, 0x24, 0x15, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd2[] = {
    0x55, 0x01, 0x15, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd3[] = {
    0x5E, 0x28, 0x15, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd4[] = {
    0x11, 0x00, 0x05, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd5[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd trt_al00_vb_inx_ft8607_5p5_720p_video_on_command[] = {
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd0, 0x00},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd1, 0x00},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd2, 0x00},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd3, 0x00},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd4, 0x64},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_on_cmd5, 0x05}
};
#define TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_ON_COMMAND 6


static char trt_al00_vb_inx_ft8607_5p5_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char trt_al00_vb_inx_ft8607_5p5_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd trt_al00_vb_inx_ft8607_5p5_720p_video_off_command[] = {
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_off_cmd0, 0x00},
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_off_cmd1, 0x78}
};
#define TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_OFF_COMMAND 2


static struct command_state trt_al00_vb_inx_ft8607_5p5_720p_video_state = {
        0, 1 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info trt_al00_vb_inx_ft8607_5p5_720p_video_command_panel = {
        1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info trt_al00_vb_inx_ft8607_5p5_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration trt_al00_vb_inx_ft8607_5p5_720p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t trt_al00_vb_inx_ft8607_5p5_720p_video_timings[]= {
        0x8b, 0x1e, 0x14, 0x00, 0x44, 0x48, 0x18, 0x22, 0x19, 0x03, 0x04, 0x00 
};

static struct panel_timing trt_al00_vb_inx_ft8607_5p5_720p_video_timing_info = {
        0, 4, 0x2C, 0x2B 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence trt_al00_vb_inx_ft8607_5p5_720p_video_reset_seq = {
    { 1, 0, 1, }, { 3, 1, 22, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight trt_al00_vb_inx_ft8607_5p5_720p_video_backlight = {
        1, 24, 4095, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc trt_al00_vb_inx_ft8607_5p5_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 3, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int trt_al00_vb_inx_ft8607_5p5_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int trt_al00_vb_inx_ft8607_5p5_720p_video_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int trt_al00_vb_inx_ft8607_5p5_720p_video_mipi_signature  = 0xffff;

static const uint32_t trt_al00_vb_inx_ft8607_5p5_720p_video_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config trt_al00_vb_inx_ft8607_5p5_720p_video_panel_platform_config = {
        3, 1, 0, 0, 0, 0, 0x200, 0x20, 0, 99, 0, 60, 0, 0, 0, 0, 0, 
        98, 0, 0, 0, 0, 5500000, 5500000, 0, 0, 0, 0, 0, 1, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info trt_al00_vb_inx_ft8607_5p5_720p_video_panel_misc_info = {
        0, 0, 1, 0x01, 0x01, 0x01, 0x01, 1, 0, 1 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl trt_al00_vb_inx_ft8607_5p5_720p_video_panel_delay_ctrl = {
        0, 0, 0, 0, 3, 1, 1, 0, 0, 0, 0, 20, 0, 50 
};

static char trt_al00_vb_inx_ft8607_5p5_720p_video_backlight_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd trt_al00_vb_inx_ft8607_5p5_720p_video_backlight_command[] = {
{0x4, trt_al00_vb_inx_ft8607_5p5_720p_video_backlight_cmd0, 0x00}
};
#define TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * trt_al00_vb_inx_ft8607_5p5_720p_video_bias_ic_array[0];
 
#define TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * trt_al00_vb_inx_ft8607_5p5_720p_video_backlight_ic_array[0];
 
#define TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_TRT_AL00_VB_INX_FT8607_5P5_720P_VIDEO_H_*/
