/* giza - a scientific plotting library built on cairo
 *
 * Copyright (c) 2010      James Wetter and Daniel Price
 * Copyright (c) 2010-2012 Daniel Price
 *
 * This library is free software; and you are welcome to redistribute
 * it under the terms of the GNU General Public License
 * (GPL, see LICENSE file for details) and the provision that
 * this notice remains intact. If you modify this file, please
 * note section 2a) of the GPLv2 states that:
 *
 *  a) You must cause the modified files to carry prominent notices
 *     stating that you changed the files and the date of any change.
 *
 * This software is distributed "AS IS", with ABSOLUTELY NO WARRANTY.
 * See the GPL for specific language governing rights and limitations.
 *
 * The Original code is the giza plotting library.
 *
 * Contributor(s):
 *      James Wetter <wetter.j@gmail.com>
 *      Daniel Price <daniel.price@monash.edu> (main contact)
 */
#ifdef CAIRO_HAS_XLIB_SURFACE
#define _GIZA_HAS_XW 1

int _giza_open_device_xw (void);
void _giza_init_norm_xw (void);
void _giza_flush_device_xw (void);
void _giza_change_page_xw (void);
void _giza_change_size_xw (int width, int height);
void _giza_close_device_xw (void);
void _giza_expand_clipping_xw (void);
void _giza_get_key_press_xw (int mode, int moveCurs, int nanc, const double *xanc, const double *yanch, 
                             double *x, double *y, char *ch);
int _giza_init_band_xw (void);

#endif
