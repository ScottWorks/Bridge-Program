# Instructions
Original Author: omardelarosa

1. Save the "build-all.sh" and "start.sh" files in the directory where you save your work

2. Install node.js if you havent already, then install "nodemon" using the following command:

```
npm install -g nodemon
```

3. If you save your homeowork in `w02/hw2` directory relative to the script as I do, run from the command line as:

```
./start.sh ./w02/hw2/  
```

4. Just do your work in `VS Code` or any text editor and it will re-compile each time you save.




build-all.sh

```shell
#!/bin/bash

INPUT_FILES=$1*.cpp

for f in $INPUT_FILES;
do
  echo "Building: $f";
  g++ $f -o "${f%.cpp}.exe";
done
```

start.sh

```shell
#!/bin/bash

FILES=$1

nodemon --exec "./build-all.sh $FILES" --watch . -e cpp
```


