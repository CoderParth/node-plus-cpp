# Node with C++

This repository serves as a boilerplate to integrate Node.js with C++. This project contains a simple integration between Node.js and C++ by creating a "Hello World" function in C++ and making it accessible in Node.js as a native addon. The project uses `node-gyp` to build the addon.

## This has been published as a npm package as well.

```bash
npm install node-plus-cpp
```

## After installation

```bash
const addon = require("node-plus-cpp");
console.log(addon.hello()); // Prints: 'Hello World'
```

## To Clone the repo

```bash
git clone https://github.com/your-username/node-plus-cpp.git
cd node-plus-cpp
```

## Installation

```bash
npm install
node-gyp rebuild
```

## Usage

```bash
const addon = require('node-plus-cpp');
console.log(addon.hello());  // Outputs: 'Hello World'
```
