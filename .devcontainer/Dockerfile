FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu
RUN apt-get update
&& apt-get install -y --no-install-recommends build-essential gdb cmake
&& apt-get clean && rm -rf /var/lib/apt/lists/*