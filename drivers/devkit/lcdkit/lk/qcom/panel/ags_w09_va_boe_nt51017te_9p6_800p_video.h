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

#ifndef _PANEL_AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_H_

#define _PANEL_AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config ags_w09_va_boe_nt51017te_9p6_800p_video_panel_data = {
        "lcdkit_ags_w09_va_boe_nt51017te_9p6_800p_video", "dsi:0:", 
        "boe_nt51017te_9p6_800p_video", 10, 0, "DISPLAY_1", 0, 551230000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution ags_w09_va_boe_nt51017te_9p6_800p_video_panel_res = {
        800, 1280, 92, 136, 8, 0, 152, 42, 4, 0, 0, 0, 0, 0, 0, 0, 
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info ags_w09_va_boe_nt51017te_9p6_800p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd0[] = {
    0x83, 0xaa, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd1[] = {
    0x84, 0x55, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd2[] = {
    0x01, 0x00, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd3[] = {
    0x83, 0x96, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd4[] = {
    0x84, 0x69, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd5[] = {
    0xA9, 0xff, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd6[] = {
    0xAA, 0xfe, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd7[] = {
    0xAB, 0xfa, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd8[] = {
    0xAC, 0xf7, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd9[] = {
    0xAD, 0xf3, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd10[] = {
    0xAE, 0xf1, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd11[] = {
    0xAF, 0xed, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd12[] = {
    0xB0, 0xeb, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd13[] = {
    0xB1, 0xe9, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd14[] = {
    0xB2, 0xe6, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd15[] = {
    0xBD, 0x1C, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd16[] = {
    0xBE, 0x30, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd17[] = {
    0xBF, 0x30, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd18[] = {
    0x98, 0x0C, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd19[] = {
    0x97, 0x80, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd20[] = {
    0x96, 0x63, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd21[] = {
    0x95, 0x00, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd22[] = {
    0x83, 0x00, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd23[] = {
    0x84, 0x00, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd24[] = {
    0x96, 0xC0, 0x23, 0x80};


static char ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd25[] = {
    0x10, 0x00, 0x23, 0x80};




static struct mipi_dsi_cmd ags_w09_va_boe_nt51017te_9p6_800p_video_on_command[] = {
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd0, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd1, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd2, 0x14},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd3, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd4, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd5, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd6, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd7, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd8, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd9, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd10, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd11, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd12, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd13, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd14, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd15, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd16, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd17, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd18, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd19, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd20, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd21, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd22, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd23, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd24, 0x00},
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_on_cmd25, 0x00}
};
#define AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_ON_COMMAND 26


static char ags_w09_va_boe_nt51017te_9p6_800p_video_off_cmd0[] = {
    0x11, 0x00, 0x23, 0x80};




static struct mipi_dsi_cmd ags_w09_va_boe_nt51017te_9p6_800p_video_off_command[] = {
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_off_cmd0, 0x64}
};
#define AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_OFF_COMMAND 1


static struct command_state ags_w09_va_boe_nt51017te_9p6_800p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info ags_w09_va_boe_nt51017te_9p6_800p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info ags_w09_va_boe_nt51017te_9p6_800p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration ags_w09_va_boe_nt51017te_9p6_800p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 1 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t ags_w09_va_boe_nt51017te_9p6_800p_video_timings[]= {
        0x98, 0x22, 0x16, 0x00, 0x4a, 0x4c, 0x1c, 0x26, 0x1a, 0x03, 0x04, 0x00 
};

static struct panel_timing ags_w09_va_boe_nt51017te_9p6_800p_video_timing_info = {
        0, 4, 0x04, 0x1e 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence ags_w09_va_boe_nt51017te_9p6_800p_video_reset_seq = {
    { 1, 0, 1, }, { 15, 10, 20, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight ags_w09_va_boe_nt51017te_9p6_800p_video_backlight = {
        3, 3, 255, 1, 3, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc ags_w09_va_boe_nt51017te_9p6_800p_video_labibb = {
        1, 1, 5500000, 5500000, 5500000, 5500000, 3, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int ags_w09_va_boe_nt51017te_9p6_800p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int ags_w09_va_boe_nt51017te_9p6_800p_video_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int ags_w09_va_boe_nt51017te_9p6_800p_video_mipi_signature  = 0xffff;

static const uint32_t ags_w09_va_boe_nt51017te_9p6_800p_video_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config ags_w09_va_boe_nt51017te_9p6_800p_video_panel_platform_config = {
        3, 1, 0, 1, 0, 0, 0x200, 0x20, 0, 8, 0, 60, 0, 0, 8, 0, 0, 
        93, 0, 0, 0, 0, 5500000, 5500000, 100, 20, 8556, 2, 1, 0, 0, 
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info ags_w09_va_boe_nt51017te_9p6_800p_video_panel_misc_info = {
        0x1, 0, 1, 0x1, 0x0, 0x01, 0x02, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl ags_w09_va_boe_nt51017te_9p6_800p_video_panel_delay_ctrl = {
        0, 0, 0, 0, 3, 3, 0, 0, 0, 500, 0, 20, 80, 50 
};

static char ags_w09_va_boe_nt51017te_9p6_800p_video_backlight_cmd0[] = {
    0xf5, 0x00, 0x23, 0x80};




static struct mipi_dsi_cmd ags_w09_va_boe_nt51017te_9p6_800p_video_backlight_command[] = {
{0x4, ags_w09_va_boe_nt51017te_9p6_800p_video_backlight_cmd0, 0x00}
};
#define AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * ags_w09_va_boe_nt51017te_9p6_800p_video_bias_ic_array[0];
 
#define AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * ags_w09_va_boe_nt51017te_9p6_800p_video_backlight_ic_array[0];
 
#define AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_AGS_W09_VA_BOE_NT51017TE_9P6_800P_VIDEO_H_*/
