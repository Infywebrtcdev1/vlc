/*****************************************************************************
 * familiar.h: private Gtk+ interface description
 *****************************************************************************
 * Copyright (C) 1999, 2000 VideoLAN
 * $Id: familiar.h,v 1.4 2002/08/18 20:36:04 jpsaman Exp $
 *
 * Authors: Jean-Paul Saman <jpsaman@wxs.nl>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

#define MAX_ATEXIT                 10

/*****************************************************************************
 * intf_sys_t: description and status of Gtk+ interface
 *****************************************************************************/
struct intf_sys_t
{
    /* windows and widgets */
    GtkWidget *         p_window;                             /* main window */
    GtkNotebook *       p_notebook;
//    GtkWidget *         p_notebook_about;
//    GtkWidget *         p_notebook_open;
//    GtkWidget *         p_notebook_preferences;
    GtkCList    *       p_clist;

    vlc_bool_t          b_autoplayfile;
    /* The input thread */
    input_thread_t *    p_input;

    /* XXX: Ugly kludge, see gtk.c */
    void             ( *pf_callback[MAX_ATEXIT] ) ( void );
};

/*****************************************************************************
 * Useful macro
 ****************************************************************************/
#define  GtkGetIntf( widget ) __GtkGetIntf( GTK_WIDGET( widget ) )
void * __GtkGetIntf( GtkWidget * );

