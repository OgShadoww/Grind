# Grind — CLI XP Manager

Grind is a minimalist, file-based XP tracker that helps you gamify real life.
Log completed tasks (coding, reading, workouts), accumulate XP, and optionally
“spend” points to unlock leisure time. Fast, offline, and written in C.

---

## Features

- Add XP by recording completed tasks (simple CLI)
- Spend XP to “unlock” time or rewards
- Show current XP balance at any time
- Lightweight and fast — single native binary in C
- Plain text storage (no databases, works offline)
- Custom XP rules via `config.txt` (per-task values)

---

## Usage

- xp # display help / app info
- xp add <task> # add XP using task name defined in config
- xp spend <points> # deduct XP points
0 xp show # print current XP balance

## Installation

### Manual (recommended for development)

macOS (Apple Silicon / Intel):
```bash
make
sudo mv xp /opt/homebrew/bin/    # or /usr/local/bin on Intel Macs
```
