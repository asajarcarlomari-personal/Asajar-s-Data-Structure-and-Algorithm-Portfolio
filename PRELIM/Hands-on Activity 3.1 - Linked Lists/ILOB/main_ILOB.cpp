#include <iostream>
#include <string>
#include "playlist_ILOB.h"

int main() {

    PlaylistNode<std::string>* playlist = nullptr;
    PlaylistNode<std::string>* current = nullptr;

    int choice;
    std::string song;

    do {

        std::cout << "\n========== SONG PLAYLIST MENU ==========" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "(1) Create Playlist" << std::endl;
        std::cout << "(2) Add Song" << std::endl;
        std::cout << "(3) Remove Song" << std::endl;
        std::cout << "(4) Play All Songs" << std::endl;
        std::cout << "(5) Next Song" << std::endl;
        std::cout << "(6) Previous Song" << std::endl;
        std::cout << "(7) Exit" << std::endl;
        std::cout << "Select an option: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {

            // Create playlist using multiple songs
            case 1: {
                std::string songs[] = {
                    "Rosas - Yuri Dope, Skusta Clee",
                    "Sandalan - Piolo Pascual",
                    "Ngiti - The Juans",
                    "Kurba - Maki"
                };

                int size = sizeof(songs) / sizeof(songs[0]);

                playlist = createPlaylist(songs, size);
                current = playlist;
                std::cout << "\nPlaylist created successfully." << std::endl;
                break;
            }

            // Add a song
            case 2: {
                std::cout << "\nEnter song title: ";
                std::getline(std::cin, song);

                addSong(song, &playlist);

                if (current == nullptr) {
                    current = playlist;
                }
                std::cout << "Song added successfully." << std::endl;
                break;
            }

            // Remove a song
            case 3: {
                std::cout << "\nEnter song title to remove: ";
                std::getline(std::cin, song);

                if (current != nullptr && current->data == song) {
                    current = current->next;
                }

                removeSong(song, &playlist);

                if (playlist == nullptr) {
                    current = nullptr;
                }
                break;
            }

            // Play all songs
            case 4: {
                std::cout << "\nPlaying all songs..." << std::endl;
                playAllSongs(playlist);
                break;
            }

            // Next song
            case 5: {
                std::cout << std::endl;
                nextSong(current);
                break;
            }

            // Previous song
            case 6: {
                std::cout << std::endl;
                previousSong(playlist, current);
                break;
            }

            // Exit
            case 7:
                std::cout << "\nExiting playlist...\n" << std::endl;
                break;
            default:
                std::cout << "\nInvalid option. Please try again." << std::endl;
        }

    } while (choice != 7);

    return 0;
}