#include <iostream>
#include <stdio.h>

using namespace std;

#include "Video.h"
#include "Movie.h"
#include "TVShow.h"

int main() {
  string video_title;
  int video_duration;
  string video_Duration;
  string video_genre;
  string video_rating;
  string streaming_service; 
  
  //Obtain input from keyboard
   cout << "Enter a Video Title: ";
  getline(cin, video_title);
  cout << "Enter the duration in minutes: ";
  getline(cin, video_Duration); 
  cout << "Enter the video genre: "; 
  getline(cin, video_genre); 
  cout << "Enter the rating: "; 
  getline(cin, video_rating);
  cout << "Enter streaming service: "; 
  getline(cin, streaming_service, 'e');
  

  video_duration = stoi(video_Duration);

  size_t found = video_title.find("Season");
  if (found!=std::string::npos){ //Check if "season" is in video name
    TVShow newShow(video_title, video_duration, video_rating, video_genre, streaming_service);
    cout << endl;   //Print video as TV-Show
    newShow.PrintItem();
  }
  else{
    Movie newShow(video_title, video_duration, video_rating, video_genre, streaming_service);
    cout << endl;  //Print video as Movie
    newShow.PrintItem();
  }
  
  return 0;
}
