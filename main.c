#include<stdio.h>

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

void open_file() {

}

void add_xp() {

}

void use_xp() {
  
}

void show_xp() {

}

void emit_function(char *function, char *arg) {
  if(function == "add") {
    add_xp(arg);
  }
  if(function == "use") {
    use_xp();
  }
  if(function == "show") {
    show_xp(); 
  }
}

int main(int arg, char **args) {
  if(arg < 2) {
    start_message();
    return 0;
  }

  return 0;
}
