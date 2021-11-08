# rat - simplified [cat](https://en.wikipedia.org/wiki/Cat_(Unix)) clone.
Rat is a very simplified GNU cat clone. It's much slower than cat because it doesnt read the files chunk-by-chunk but char-by-char (which is good for small files but not for larger ones).

# Usage
$ ```rat <file(s)>```
### Example
$ ```rat file1.txt file2.txt``` 

# Installation
$ ```git clone https://github.com/rotth/rat```  
$ ```cd rat```  
$ ```make install```
