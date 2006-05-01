/*
 *  Copyright (c) 1992, 1996 John E. Davis  (davis@space.mit.edu)
 *  All Rights Reserved.
 */

#define MOST_STATUS_COLOR	1
#define MOST_ULINE_COLOR	2
#define MOST_BOLD_COLOR		3

extern void most_tt_reverse_video(void);
extern void most_tt_bold_video(void);
extern void most_tt_underline_video(void);
extern void most_tt_normal_video(void);
extern void most_wide_width(void);
extern void most_narrow_width(void);
extern void most_enable_cursor_keys(void);

extern void most_goto_rc (int, int);
extern void most_setup_colors (void);
