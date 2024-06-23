Raiva Engine
Overview
Raiva Engine is a powerful and flexible game engine designed for game developers who want to leverage the capabilities of OpenGL and C++. It provides a comprehensive set of tools and libraries to help you create stunning graphics, robust physics, and engaging gameplay experiences.

Features
High-Performance Rendering: Built with OpenGL to deliver high-quality graphics and performance.
Cross-Platform Support: Compatible with Windows, macOS, and Linux.
Flexible Architecture: Modular design allows for easy integration and customization.
Physics Engine: Includes a built-in physics engine for realistic simulations.
Asset Management: Efficient handling of textures, models, and other game assets.
Scripting Support: Extend your game with Lua scripting.
Audio Engine: Integrated audio engine for immersive sound effects and music.
Debugging Tools: Comprehensive tools for debugging and profiling your game.
Getting Started
Prerequisites
Before you begin, ensure you have the following installed:

C++ Compiler: Compatible with C++17 or higher.
OpenGL: Version 3.3 or higher.
Premake: Version 5.0 or higher.
Git: For version control and repository management.
Installation
Clone the Repository

bash
Copy code
git clone https://github.com/yourusername/raiva_engine.git
cd raiva_engine
Generate Project Files

bash
Copy code
./generateProjects.bat
Open the Solution File
Open the generated RaivaEngine.sln file in Visual Studio (or your preferred IDE).

Build the Engine
Build the solution using your IDE.

Run a Sample Project
Set one of the example projects as the startup project and run it.

Directory Structure:

Basic Usage
To create a new game with Raiva Engine, follow these steps:

Create a New Project Directory

bash
Copy code
mkdir MyGame
cd MyGame
Copy the Premake Script from Examples

bash
Copy code
cp ../raiva-engine/examples/premake5.lua .
Edit premake5.lua to Include Your Source Files

Implement Your Game Logic

bash
Copy code
premake5 vs2022
Build and Run Your Game
Open the generated solution in Visual Studio, build, and run your game.

Documentation
Comprehensive documentation is available in the docs/ directory and online at Raiva Engine Docs.

License
Raiva Engine is licensed under the Apache 2.0 License. See the LICENSE file for more information.

Contact
For support, questions, or general inquiries, please contact us at marcelomosl@icloud.com.
