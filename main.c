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
  int task_xp = get_task_xp(arg);
  int balance_xp = load_xp();
  int sum = task_xp + balance_xp;
  FILE *f = open_xp("w");
  fprintf(f, "%d", sum);

  fclose(f);
  printf("%d points was add\n", task_xp);
  printf("Your current balance : %d\n", sum);
  return;
}

void use_xp(char *arg) {
  int task_xp = get_task_xp(arg);
  int balance_xp = load_xp();
  int res = balance_xp - task_xp;
  res < 0 ? printf("You have not enough points for this") : printf("Succes, your current balance: %d", res);
  FILE *f = open_xp("w");

  fprintf(f, "%d", res);
  fclose(f);
  return;
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
