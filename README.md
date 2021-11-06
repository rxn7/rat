# rat - simplified [cat](https://en.wikipedia.org/wiki/Cat_(Unix)) clone.
Rat is a very simplified cat clone that includes only stdio library. It's currently much slower than cat because it doesnt read the files chunk-by-chunk but char-by-char (which is fine for small files but not for larger ones).

# Usage
$ rat <path/to/file>
### Example
$ ```rat some/file.txt```  
$ ```rat some/file.txt some/other/file.txt``` 

# Installation
$ git clone https://github.com/rotthin/rat   
$ cd rat   
$ make install   
