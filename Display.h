/*
 *   Copyright (C) 2018 by Andy Uribe CA6JAU
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(DISPLAY_H)
#define  DISPLAY_H

class CDisplay {
public:
  CDisplay();

  void init();
  void showMsg(uint8_t* data, uint16_t length, uint8_t n_cw, uint16_t errors, int16_t rssi);

private:
  void initInt();
  void showMsgInt(uint8_t* data, uint16_t length, uint8_t n_cw, uint16_t errors, int16_t rssi);

};

#endif
