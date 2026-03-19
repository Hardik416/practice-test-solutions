/*
Q6: Blobby Volley Scores
- Alice starts as server, Bob as receiver.
- If server wins: server's score +1, server stays server.
- If receiver wins: receiver's score does NOT increase, but receiver becomes new server.
- Find final scores after N turns.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int scoreA = 0, scoreB = 0;
        char server = 'A'; // Alice starts as server

        for (int i = 0; i < n; i++) {
            char winner = s[i];
            if (winner == server) {
                // Server wins: score increases, stays server
                if (server == 'A') scoreA++;
                else scoreB++;
                // server stays same
            } else {
                // Receiver wins: no score increase, receiver becomes server
                server = winner;
            }
        }
        cout << scoreA << " " << scoreB << "\n";
    }
    return 0;
}
