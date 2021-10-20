# rat - simplified [cat](https://en.wikipedia.org/wiki/Cat_(Unix)) clone.

Rat is a very simplified [cat](https://en.wikipedia.org/wiki/Cat_(Unix)) clone that includes only stdio library.
It's currently much slower than cat because it doesnt read the files chunk-by-chunk but char-by-char (which is fine for small files but not for larger ones).
