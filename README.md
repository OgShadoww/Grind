# 🧠 Grind

**Grind** is a minimalist CLI-based XP manager that helps you gamify your real life.

Track real-world actions like coding, reading, workouts, and gain XP to "unlock" game time. No more guilt-driven gaming — earn your time, level up your life.

---

## 🚀 Features

- ✅ Add XP by completing tasks (`grind add code_30min`)
- ✅ Spend XP to unlock (`grind spend 3`)
- ✅ View current XP and daily history (`grind show`)
- ✅ Lightweight and fast — written in C
- ✅ Simple file-based system (no databases)
- ✅ Fully offline — your XP stays local
- ✅ Supports custom XP rules via `config.txt`

---

## 📦 Installation

### Manual (Recommended for Development)

```bash
gcc main.c -o grind
mv grind /opt/homebrew/bin/  # or /usr/local/bin/ on Intel Macs
```
