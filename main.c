#include<stdio.h>
#include<string.h>

int points;

void start_message() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                🧠 GRIND                ║\n");
  printf("╚════════════════════════════════════════╝\n\n");
  printf("Turn your real-life grind into a game.\nEarn XP for productive actions.\nSpend XP for things you love.\nLevel up your life.\n");

  printf("Your current point: %d", points);

  printf("Commands:\n");
  printf("\txp add <task>\n");
  printf("\txp use <reward>\n");
  printf("\txp show\n\n\n");

  printf("Fully offline. Simple file storage.\n");
  printf("Lightweight C code — runs anywhere.\n\n");

  printf("\"Don’t just live. Level up.\"\n");
}

void open_file() {
  FILE *point = fopen("point.txt", "r");
  fscanf(point, "%d", &points);

  fclose(point);
}

void add_xp(char *arg) {
  FILE *tasks = fopen("tasks.txt", "r");
}

void use_xp(char *arg) {
   
}

void show_xp(char *arg) {

}

void emit_function(char *function, char *arg) {
  if(strcmp(function, "add")) {
    add_xp(arg);
  }
  if(strcmp(function, "use")) {
    use_xp(arg);
  }
  if(strcmp(function, "show")) {
    show_xp(arg); 
  }
}

int main(int arg, char **args) {
  open_file();
  if(arg < 2) {
    start_message();
    return 0;
  }

  return 0;
}
