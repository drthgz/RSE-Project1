# Project Summary: Simulation World Creation

This document outlines the essential tasks required for creating a simulation world within the Robotics Software Engineer Nanodegree Program. The goal is to leverage Gazebo's tools to build a comprehensive environment for robotics simulation.

## Tasks Overview

### 1. Build a Wall Structure
- **Tool Used:** Building Editor tool in Gazebo.
- **Requirements:**
  - Construct a single floor wall structure.
  - Apply at least one feature and one color to the structure. Adding one texture is optional.
  - Ensure ample space between walls for robot navigation.

### 2. Model an Object
- **Tool Used:** Model Editor tool in Gazebo.
- **Requirements:**
  - Model any object of your choice.
  - Ensure model links are connected with joints.

### 3. Import Structure and Models into Gazebo World
- **Requirements:**
  - Import the created structure and two instances of your model into an empty Gazebo World.

### 4. Utilize Gazebo Online Library
- **Requirements:**
  - Import at least one model from the Gazebo online library.
  - Implement the imported model in your existing Gazebo world.

### 5. Write a C++ World Plugin
- **Requirements:**
  - Develop a C++ World Plugin to interact with your Gazebo world.
  - Ensure the code displays a “Welcome to ’s World!” message upon launching the Gazebo world file.

# Project Submission Folder Structure

This guide outlines the required files and their organization for your project submission. Ensure that your submission folder contains all the necessary components as described below.

## Folder Structure and Contents

### `model` Folder
- **Description:** Contains all models created or utilized within the project.
- **Contents:**
  - Objects or robots designed using the Model Editor tool in Gazebo.
  - A single-floor structure designed using the Building Editor tool in Gazebo.

### `world` Folder
- **Description:** Includes the main Gazebo world file.
- **Contents:**
  - A Gazebo world file that incorporates the models from the `model` folder.

### `script` Folder
- **Description:** Houses the Gazebo world plugin C++ scripts.
- **Contents:**
  - Gazebo world plugin C++ script to interact with the simulation world.

### `CMakeLists.txt` File
- **Description:** Essential for linking the C++ code to necessary libraries.
- **Purpose:**
  - Facilitates the integration of C++ scripts with Gazebo and other libraries, ensuring proper compilation and execution.

## Submission Guidelines

Ensure that your project submission folder is well-organized, following the structure outlined above. Each folder should contain only the relevant files, making it easy for the evaluation process. The `CMakeLists.txt` file should be correctly configured to link your C++ code with the required libraries, ensuring that your world plugin functions as intended.

By adhering to these guidelines, you will ensure that your project submission is complete and can be efficiently reviewed.
