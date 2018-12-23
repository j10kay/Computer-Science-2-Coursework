#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Video.h"    //include header file

int main() {

  vector<Video> userPlaylist(50);     //create a vector with a capacity of 50
  userPlaylist[0].setVideoInfo("White Chicks", "Movie", 1, 20, 54, "My Bored Playlist");
  userPlaylist[1].setVideoInfo("Black Mirror, Season 1", "TV-Show", 0, 40, 55, "My Bored Playlist");
  userPlaylist[2].setVideoInfo("Breaking Bad, Season 2", "TV-Show", 0, 45, 00, "My Bored Playlist");
  cout << "Now Playing \"" << userPlaylist[0].getVideoPlaylist()  << "\":"<< endl;
  int element_accessor;
  int j,k,l;
  for (int i = 0; i < 3; i++) {
    srand((time(0)));
    j = (rand() % 3);        //generate random numbers to alter arrangement of movies
    k = (rand() % 3);
    while (j == k){
      k = (rand() % 3);
    }
    l = (rand() % 3);
    while ((l == j) || (l == k)) {
      l = (rand() % 3);
    }
    cout << "*********************************" << endl; 
    if (i == 0) {
      cout << "Now Showing:" << endl;
      element_accessor = j;
    }
    else if (i == 1) {
      cout << "Up Next:" << endl;
      element_accessor = k;
    }
    else if (i == 2) {
      cout << "Then:" << endl;
      element_accessor = l;
    }
    cout << "Video Name: " << userPlaylist[i].getVideoName() << endl;   //format and print output
    cout << "Type: " << userPlaylist[i].getVideoType() << endl;
    cout << "Duration: " << userPlaylist[i].getVideoDuration();
    
    if (i != 2)
      cout << endl;
  }
  return 0;
}
