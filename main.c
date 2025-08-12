#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void start_message() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                🧠 GRIND                ║\n");
  printf("╚════════════════════════════════════════╝\n\n");
  printf("Turn your real-life grind into a game.\nEarn XP for productive actions.\nSpend XP for things you love.\nLevel up your life.\n");

  printf("Commands:\n");
  printf("\txp add <task>\n");
  printf("\txp use <reward>\n");
  printf("\txp show\n\n\n");

  printf("Fully offline. Simple file storage.\n");
  printf("Lightweight C code — runs anywhere.\n\n");

  printf("\"Don’t just live. Level up.\"\n");
}

int open_xp() {
  FILE *point = fopen("point.txt", "r");
  if(point == NULL) {
    printf("Error handling xp file");
    exit(-1);
  }

  int points;
  fscanf(point, "%d", &points);
  fclose(point);

  return points;
}

void add_xp(char *arg) {
  FILE *tasks = fopen("tasks.txt", "r");
  char string[50];  

  while(fscanf(tasks, "%s", string ) == 1) {
    if(string == arg) {
      
    }
  }
}

void use_xp(char *arg) {
   
}

void show_xp(char *arg) {

}

void emit_function(char *function, char *arg) {
  if(strcmp(function, "add") == 0) {
    add_xp(arg);
  }
  if(strcmp(function, "use") == 0) {
    use_xp(arg);
  }
  if(strcmp(function, "show") == 0) {
    show_xp(arg); 
  }
}

int main(int arg, char **args) {
  if(arg < 2) {
    start_message();
    return 0;
  }
  emit_function(args[1], args[2]);

  return 0;
}
