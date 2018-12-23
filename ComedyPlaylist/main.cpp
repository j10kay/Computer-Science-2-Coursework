#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Video.h"
#include "Movie.h"
#include "TVShow.h"
#include "User.h"

int main() {
  string video_title;
  int video_duration;
  string year;
  string video_Duration;
  string video_genre;
  string video_rating;
  string rating; 
  ifstream myfile;
  vector<TVShow> TVShowVector;
  vector<Movie> MovieVector;

  myfile.open("FavoriteMovieTVShowsClassList.txt");
  getline(myfile, video_title, '\t');   
  getline(myfile, video_genre, '\t'); 
  getline(myfile, video_Duration, '\t');
  getline(myfile, video_rating, '\t');
  getline(myfile, rating, '\t');
  getline(myfile, year, '\r');
   
  while(!myfile.eof()){
    getline(myfile, video_title, '\t');  
    size_t found_title = video_title.find("18:");
    if (found_title != std::string::npos){
      video_title.replace(28,21, "");
    }
    getline(myfile, video_genre, '\t'); 
    getline(myfile, video_Duration, '\t'); 
    getline(myfile, video_rating, '\t');
    getline(myfile, rating, '\t');
    getline(myfile, year, '\r');

    video_duration = stoi(video_Duration);
    size_t found = video_title.find("Season");
    if (found!=std::string::npos){ //Check if "Season" is in video name
      TVShow newShow(video_title, video_genre, video_duration, rating, video_rating, year);
      if (video_genre == "Comedy") {
        TVShowVector.push_back(newShow);
      }
    }
    else{
      Movie newShow(video_title, video_genre, video_duration, rating, video_rating, year);
      if (video_genre == "Comedy") {
        MovieVector.push_back(newShow);
      }
    }
  }
  

  string userFirstName, userLastName, user_ID, userPlaylistName;
  //cout << "Enter your first name: " << endl;
  cin >> userFirstName;
  //cout << "Enter your last name: " << endl;
  cin >> userLastName;
  //cout << "Enter your ID: " << endl;
  cin >> user_ID;
  //cout << "Enter your playlist name: " << endl;
  cin.ignore();
  getline(cin, userPlaylistName);
  User newUser(userFirstName, userLastName, user_ID);
  cout << "User Information:" << endl;
  cout << "Firstname: " << newUser.Printfirstname() << " " << endl;
  cout << "Lastname:" << "  " << newUser.Printlastname() << " " << endl;
  cout << "userid:" << "    " << newUser.PrintuserID() << endl << endl;
  cout << "Playlist name: " << userPlaylistName << endl;
  cout << "_________________________________________________________________________________" << endl;
  cout << "Title" << "                                    " << "Genre" << "  " << "Duration" << "  " << "User-rating" 
       << " " << "Rating" << " " << "Year" << endl;

  for (int i = 0; i < MovieVector.size(); i++){
      MovieVector[i].PrintItem();
  }

  for (int i = 0; i < TVShowVector.size(); i++){
      TVShowVector[i].PrintItem();
  }
  
  int j,k,l,m,n;
  for (int i = 0; i < 5; i++) {
    srand((time(0)));
    j = (rand() % 5);        //generate random numbers to alter arrangement of movies
    k = (rand() % 5);
    while (j == k){
      k = (rand() % 5);
    }
    l = (rand() % 5);
    while ((l == j) || (l == k)) {
      l = (rand() % 5);
   }
   m = (rand() % 5);
   while ((m == j) || (m == k) || (m == l)) {
      m = (rand() % 5);
   }
   n = (rand() % 5);
    while ((n == j) || (n == k) || (n == l) || (n==m)) {
      n = (rand() % 5);
   }
   
  }
  cout << "2006" << endl;

  myfile.close();
  return 0;
}
