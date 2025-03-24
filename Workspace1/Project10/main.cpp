#include <iostream>
#include <vector>

using namespace std;

/*******************************************************
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking 
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 * 
 * If a vowel is found, you should display to cout:
 * 
 * "Vowel found: " followed by the vowel that was found.
 * 
 * If no vowel is found in the vector, then you should display to cout:
 * 
 * "No vowel was found"  
 * 
 * For example, below are several examples of vectors and what your output should be:
 * 
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 * 
 * *****************************************************/
void find_first_vowel(const std::vector<char>& vec) {
    size_t i{0};
 
    // Declare a boolean flag to indicate whether a vowel has been found.
    bool vowel_found {false};
 
 int main(){
    // Check if the vector is not empty before proceeding.
    if (!vec.empty()) {
        // Enter a do-while loop, which will run at least once.
        do {
            // Check if the current character at index i is a lowercase Englisg vowel.
            if (vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' || vec.at(i) == 'o' || vec.at(i) == 'u') {
                // If a vowel is found, set vowel_found to true, which will cause the loop to exit.
                vowel_found = true;
            } else {
                // If not a vowel, increment the index to check the next character.
                i++;
            }
        // Continue the loop until a vowel is found or the end of the vector is reached.
        } while (!vowel_found && i < vec.size());
    }
    
    // After exiting the loop, check if a vowel was found.
    if (vowel_found) {
        // If a vowel was found, print it.
        cout << "Vowel found: " << vec.at(i);
    } else {
        // If no vowel was found, print a message indicating that.
        cout << "No vowel was found";
    }
    
    cout << endl;
    return 0;
 }
}