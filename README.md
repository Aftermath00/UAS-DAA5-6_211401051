# UAS-DAA5-6

1. Buat lah kata kata acak(minimal 50 karakter) lalu cari kata kata dalam kata kata acak yang telah di buat. Lakukan dengan algoritma Knuth-Morris-Pratt, buktikan ketika tidak di temukan, dan buktikan ketika telah di temukan. dan buatlah gambarannya secara manual seperti di modul.(WAJIB)

### Algorithm

* The first loop is used to iterate over the characters of the text. Each iteration of the loop compares the current character of the text to the current character of the pattern. If there is a match, the algorithm moves on to the next character of the pattern and the next character of the text.

* The second loop is used to backtrack when a mismatch is found. The loop starts at the last matching character of the pattern and checks for a match at the next character of the text. If no match is found, the loop continues to move backwards through the pattern until either a match is found or the beginning of the pattern is reached. If a match is found, the algorithm moves on to the next character of the pattern and the next character of the text.

* The third loop is used to return the index of the first character of the pattern if a match is found. The loop checks if the length of the pattern has been reached. If it has, the algorithm returns the index of the first character of the pattern. If not, the algorithm returns -1.

## Personal Information

- Name : Rizky Azmi Swandy
- Student ID : 211401051
- Laboratory : Design and Analytics of Algorithm
- Lab. Assistant : Tamir Rusydi Hega
