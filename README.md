# CALCEX
A math and logical REPL i just made to test my skills
## Installation
Clone the repository and compile on your machine the main.cpp
## Usage
The structure of a language command is
```
<Oprator> <Oprand1> <Oprand2> ?
```
List of oprators in use:
```
ADD #+
SUB #-
MUL #*
DIV #/
PWR #^
MOD #%
SQRT #square root
FLR #floor
AND # logical and
OR #logical or
NOT #logical not
NAND #logical nand
NOR #logical nor
XOR #logical xor
BIG #>
SML #<
EQL #==
BOE #>=
SOE #<=
DIF #!=
STR #stores a value in a variable
PSH #push a value outside the variable
END #end the running of the repl
```
For example:
```
ADD 1 1 ?
```
will return 2
```
AND 1 0 ?
```
will return 0
```
STR myVar 14 ?
PSH myVar 0 ?
```
will return 14

plese notice that currently the repl supports only int values
and you can not have comments to the command curetly
more options will be avialable later.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
Just don't be assholes and it all fine.
Not take any responsibility of things that happen to your machine.
