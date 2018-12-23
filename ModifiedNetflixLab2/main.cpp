#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include "Video.h"

int main() {
  ifstream myfile;
  myfile.open("infile.csv");  //Open data file
  string movieTitle, movieRating, movieInformation, movieRatingLevel, movieRatingDescription, movieReleaseYear,movieRatingScore, movieRatingSize = "";  //Variable declarations & initializations
  int quoteCount = 0;
  int commaCount = 0;
  vector<Video> userPlaylist(1000);  //Create a vector of 1000 elements
  

  cout << "Now Playing \"My Bored Playlist\":"<< endl;  //Print header
  for (int i = 0; i < 1000; i++) {
    getline(myfile, movieTitle, ',');
    string dummyTitle = movieTitle;
    if (movieTitle[0] == '\"') //Handle anomaly in title name
      movieTitle = "";
    for (int j = 0; j < dummyTitle.length(); j++){
      if (dummyTitle[0] == '\"') {
        if (dummyTitle[j] == '\"') {
            quoteCount++;
          }

          if ((j != 0) && (dummyTitle[j] == '\"')) {
            quoteCount++;
          }

          if (quoteCount == 1) {
            movieTitle += dummyTitle[j];
          }

          if ((quoteCount > 1) && (dummyTitle[j] == ',')) {
            commaCount++;
          }

          if (commaCount == 1) {
            movieTitle += dummyTitle[j];
          }
      }
    }
    getline(myfile, movieRating, ',');
    movieInformation = "";
    getline(myfile, movieInformation);
    for (int j = 0; j < movieInformation.length(); j++){
      if (movieInformation[0] == '\"') {
        if (movieInformation[j] == '\"') {
          quoteCount++;   //Count quotes to determine nature of readings
        }

        if ((j != 0) && (movieInformation[j] == '\"')) {
          quoteCount++;
        }

        if (quoteCount == 1) {
          movieRatingLevel += movieInformation[j];
        }

        if ((quoteCount > 1) && (movieInformation[j] == ',')) {
          commaCount++;   //Count commas to separate data into appropriate variables
        }

        if (commaCount == 1) {
          movieRatingDescription += movieInformation[j];
        }

        else if (commaCount == 2) {
          movieReleaseYear += movieInformation[j];
        }

        else if (commaCount == 3) {
          movieRatingScore += movieInformation[j];
        }

        else if (commaCount == 4) {
          movieRatingSize += movieInformation[j];
        }
          
      }
        
      else {
        
        if (commaCount == 0) {
          movieRatingLevel += movieInformation[j];
          }

        if (movieInformation[j] == ',') {
            commaCount++;
          }
        
        if (commaCount == 1) {
          movieRatingDescription += movieInformation[j];
        }

        else if (commaCount == 2) {
          movieReleaseYear += movieInformation[j];
        }

        else if (commaCount == 3) {
          movieRatingScore += movieInformation[j];
        }

        else if (commaCount == 4) {
          movieRatingSize += movieInformation[j];
        }

      }
    }
    userPlaylist[i].setVideoInfo(movieTitle, movieRating, movieRatingLevel, movieRatingDescription, movieReleaseYear, movieRatingScore, movieRatingSize);
    //Reinitialize variables to prepare for new input
    movieTitle = "";
    movieRating = "";
    movieInformation = "";
    movieRatingLevel = "";
    movieRatingDescription = "";
    movieReleaseYear = "";
    movieRatingScore = "";
    movieRatingSize = "";
    quoteCount = 0;
    commaCount = 0;
    //Format and print output
    cout << "****************************************************************" << endl; 
    cout << "Title: " << userPlaylist[i].getTitle() << endl;
    cout << "Rating: " << userPlaylist[i].getRating() << endl;
    if (userPlaylist[i].getRatingLevel()[0] == '\"') { 
      cout << "Rating Level: " << userPlaylist[i].getRatingLevel().replace(0,1,"") << endl;
    }
    else if ((userPlaylist[i].getRatingLevel()[userPlaylist[i].getRatingLevel().length()-1] == ',') && (userPlaylist[i].getRatingLevel().length() > 1)){
       cout << "Rating Level: " << userPlaylist[i].getRatingLevel().replace(userPlaylist[i].getRatingLevel().length()-2,userPlaylist[i].getRatingLevel().length()-1,"") << endl;
     }
    else { 
    cout << "Rating Level: " << userPlaylist[i].getRatingLevel() << endl;
    }
    cout << "Rating Description: " << userPlaylist[i].getRatingDescription().replace(0,1,"") << endl;
    cout << "Release Year: " << userPlaylist[i].getReleaseYear().replace(0,1,"") << endl;
    cout << "User Rating Score: " << userPlaylist[i].getUserRatingScore().replace(0,1,"") << endl;
    cout << "User Rating Size: " << userPlaylist[i].getUserRatingSize().replace(0,1,"") << endl;
    
  }
  return 0;
}
