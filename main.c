#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TASKS_FILE "tasks.txt"
#define POINTS_FILE "point.txt" 

void start_message() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                🧠 GRIND                ║\n");
  printf("╚════════════════════════════════════════╝\n\n");
  printf("Turn your real-life grind into a game.\nEarn XP for productive actions.\nSpend XP for things you love.\nLevel up your life.\n\n");

  printf("Commands:\n");
  printf("\txp add <task>\n");
  printf("\txp use <reward>\n");
  printf("\txp show\n\n\n");

  printf("Fully offline. Simple file storage.\n");
  printf("Lightweight C code — runs anywhere.\n\n");

  printf("\"Don’t just live. Level up.\"\n");
}

FILE *open_xp(char *mode) {
  FILE *point = fopen(POINTS_FILE, mode);
  if(point == NULL) {
    printf("Error handling xp file");
    exit(-1);
  }

  return point;
}

int get_task_xp(char *task) {
  FILE *tasks = fopen(TASKS_FILE, "r");
  if(!tasks) {
    printf("Error handling tasks file\n");
    exit(-1);
  }

  char string[50];
  int xp;
  
  while(fscanf(tasks, "%s %d", string, &xp ) == 2) {
    if(strcmp(string, task) == 0) {
      return xp;
    }
  }

  fclose(tasks);
  printf("Task wasn't be finded\n");
  return 0;
}

int load_xp() {
  FILE *f = open_xp("r");
  int points = 0;
  
  fscanf(f, "%d", &points);
  fclose(f);
  return points;
}

void add_xp(char *arg) {
  int xp = get_task_xp(arg);
  FILE *f = open_xp("w");
  fprintf(f, "%d", xp);

  fclose(f);
  printf("%d points was add\n", xp);
  printf("Your current balance : %d\n", load_xp());
  return;
}

void use_xp(char *arg) {
   
}

void show_xp(char *arg) {
  int xp = load_xp();
  printf("Current points : %d\n", xp);

  return;
}

void emit_function(char *function, char *arg) {
  if(strcmp(function, "add") == 0) {
    add_xp(arg);
  }
  else if(strcmp(function, "use") == 0) {
    use_xp(arg);
  }
  else if(strcmp(function, "show") == 0) {
    show_xp(arg); 
  }
  else {
    printf("Commands wasn't finded\n");
    return;
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
