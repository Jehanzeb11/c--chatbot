#include <iostream>
#include <cctype>  // For tolower function
using namespace std;

int main() {
    // Predefined prompts and responses
    const int numPrompts = 3;
    string prompts[numPrompts] = {"hello", "how are you", "bye"};
    string responses[numPrompts] = {
        "Hi there! How can I help you?",
        "I'm just a program, but I'm functioning as expected!",
        "Goodbye! Have a great day!"
    };

    string userInput;
    cout << "Chatbot initialized. Type 'exit' to end the chat.\n\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        // Convert input to lowercase for case-insensitive matching
        for (int i = 0; i < userInput.length(); ++i) {
            userInput[i] = tolower(userInput[i]);
        }

        if (userInput == "exit") {
            cout << "Chatbot: Exiting the chat. Goodbye!\n";
            break;
        }

        bool found = false;
        for (int i = 0; i < numPrompts; ++i) {
            if (userInput == prompts[i]) {
                cout << "Chatbot: " << responses[i] << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Chatbot: I don't know this.\n";
        }
    }

    return 0;
}
