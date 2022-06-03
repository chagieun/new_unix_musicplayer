#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"
#include "textfilewriter.h"

void create_music_titles(FILE* stream){
  stream = fopen("title.txt", "w+");

  int num;
  scanf("%d", &num);
  for(int i=0; i<num; i++){
         read_file("title.txt");
  }
  stream = fopen("title.txt", "a+");
  write_file("title.txt");
  fclose(stream);

}

void read_file(char* file_name){
	char buffer[MAX_TITLE_SIZE];
	FILE* stream = fopen(file_name, "a+");
	fgets(buffer, sizeof(buffer), stdin);
	fputs(buffer, stream);
	fclose(stream);
}

void write_file(char* file_name){
	FILE* stream = fopen(file_name, "a");
	char musicTitle[51];
	fgets(musicTitle, sizeof(musicTitle), stdin);
	fputs(musicTitle, stream);
	fclose(stream);
}
