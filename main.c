#include<stdio.h>

void startMessage() {
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

int main(int arg, char **args) {
  if(arg < 2) {
    startMessage();
    return 0;
  }
  else {
    printf("%c", args[1][0]);
  }
  
  return 0;
}
