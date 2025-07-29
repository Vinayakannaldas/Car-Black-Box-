/* 
 * File:   car_black_box.h
 * Author: VINAYAK
 *
 * Created on 3 May, 2025, 1:09 AM
 */

#ifndef CAR_BLACK_BOX_H
#define	CAR_BLACK_BOX_H

void display_time(void);
void display_default_screen(char *event, unsigned char speed);
void log_car_event(char event[], unsigned char speed);
void clear_screen(void);
char login(unsigned char reset_flag, unsigned char key);
char login_menu(unsigned char reset_flag, unsigned char key);

char view_log(unsigned char reset_flag, unsigned char key);
void clear_log(unsigned char reset_flag);
void download_log(void);
void edit_time(unsigned char reset_flag, unsigned char key);
char change_password(unsigned char reset_flag, unsigned char key);

#endif	/* CAR_BLACK_BOX_H */
