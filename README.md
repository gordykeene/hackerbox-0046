# HackerBox #0046 - Persistence

HackerBox #0046 can be [purchased here](https://hackerboxes.com/collections/past-hackerboxes/products/hackerbox-0046-persistence) and [built from the instructions](https://www.instructables.com/HackerBox-0046-Persistence/).

This repo collects the kit's sketches and dependencies into a single place, with varying success.

## Setup

Pre-requisites:

* [VSCode](https://code.visualstudio.com/download)
* [PlatformIO for VSCode](https://platformio.org/install/ide?install=vscode)

After cloning this repo, open the `hackerbox-TODO.code-workspace` file in VSCode.

In VSCode, select the desired Default Environment from the PlatformIO toolbar. See [Multi-root Workspaces](https://code.visualstudio.com/docs/editor/multi-root-workspaces) for more information about MultiRoot Workspaces in VS Code.

## Contents

The VSCode workspace file (`.code-workspace`) contains the following projects.

### Blink

A simple sketch that blinks an LED to ensure the Arduino and development environment is working.

### Knight-Rider

Uses a seven LED bar to simulate a Knight Rider style light bar.

### POV (Persistence of Vision)

Uses a seven LED bar to display text.

See also [Arduino POV Project](https://www.instructables.com/Simple-Arduino-POV-Wand/) from Ahmad Saeed.

### E-Paper

I was never able to get any of the e-paper examples to work. I suspect the the original code assumed some older or specific version of the `Adafruit GFX` or the `GxEPD` libraries. Or maybe I just wired it wrong.

I even tried the [b1uN7/HackerBoxes](https://github.com/b1uN7/HackerBoxes/) mentioned in the comments, but I still couldn't get it to work.

In any case, sometimes its best to just move on, life's too short to get hung up on a single project.
