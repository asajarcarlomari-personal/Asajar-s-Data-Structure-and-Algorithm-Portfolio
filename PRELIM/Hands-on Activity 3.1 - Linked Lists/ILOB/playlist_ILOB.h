#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>

// Node structure for the circular linked list
template <typename T>
class PlaylistNode {
public:
    T data;
    PlaylistNode<T>* next = nullptr;
};

// Create a new node
template <typename T>
PlaylistNode<T>* createNode(T newData) {
    PlaylistNode<T>* newNode = new PlaylistNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;

    return newNode;
}

// Create a playlist using multiple songs
template <typename T>
PlaylistNode<T>* createPlaylist(T songs[], int size) {
    if (songs == nullptr || size <= 0) {
        return nullptr;
    }

    PlaylistNode<T>* head = nullptr;
    PlaylistNode<T>* tail = nullptr;

    for (int i = 0; i < size; i++) {
        PlaylistNode<T>* newNode = createNode(songs[i]);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Connect the last node back to the first node
    tail->next = head;

    return head;
}

// Add a song to the playlist
template <typename T>
void addSong(T newData, PlaylistNode<T>** head) {
    PlaylistNode<T>* newNode = createNode(newData);

    // If the playlist is empty
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = newNode;
        return;
    }

    // Find the last node
    PlaylistNode<T>* tail = *head;

    while (tail->next != *head) {
        tail = tail->next;
    }

    // Add the new song at the end
    tail->next = newNode;
    newNode->next = *head;
}

// Remove a song from the playlist
template <typename T>
void removeSong(T findData, PlaylistNode<T>** head) {
    if (*head == nullptr) {
        std::cout << "The playlist is empty." << std::endl;
        return;
    }

    PlaylistNode<T>* current = *head;
    PlaylistNode<T>* previous = nullptr;

    // Search for the song
    do {
        if (current->data == findData) {
            break;
        }

        previous = current;
        current = current->next;

    } while (current != *head);

    // Song was not found
    if (current->data != findData) {
        std::cout << "Song not found." << std::endl;
        return;
    }

    // If there is only one song
    if (current->next == current) {
        delete current;
        *head = nullptr;
        return;
    }

    // If removing the first song
    if (current == *head) {
        PlaylistNode<T>* tail = *head;

        while (tail->next != *head) {
            tail = tail->next;
        }

        *head = current->next;
        tail->next = *head;

        delete current;
        return;
    }

    // Removing a song other than the first
    previous->next = current->next;

    delete current;
}

// Play all songs in the playlist
template <typename T>
void playAllSongs(PlaylistNode<T>* head) {
    if (head == nullptr) {
        std::cout << "The playlist is empty." << std::endl;
        return;
    }

    PlaylistNode<T>* current = head;

    do {
        std::cout << current->data << std::endl;
        current = current->next;

    } while (current != head);
}

// Move to the next song
template <typename T>
void nextSong(PlaylistNode<T>*& current) {
    if (current == nullptr) {
        std::cout << "The playlist is empty." << std::endl;
        return;
    }

    current = current->next;

    std::cout << "Now Playing: " << current->data << std::endl;
}

// Move to the previous song
template <typename T>
void previousSong(PlaylistNode<T>* head,
                  PlaylistNode<T>*& current) {

    if (head == nullptr || current == nullptr) {
        std::cout << "The playlist is empty." << std::endl;
        return;
    }

    PlaylistNode<T>* previous = head;

    // Find the node before the current node
    while (previous->next != current) {
        previous = previous->next;
    }

    current = previous;

    std::cout << "Now Playing: " << current->data << std::endl;
}

#endif