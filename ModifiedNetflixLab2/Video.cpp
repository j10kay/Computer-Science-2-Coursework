#include <iostream>
using namespace std;

#include "Video.h"

//Default constructor
Video::Video (){
  title = "empty";
  rating = "empty";
  ratingLevel = "empty";
  ratingDescription = "empty";
  releaseYear = "empty";
  userRatingScore = "empty";
  userRatingSize = "empty";
}

//Non-default constructor
Video::Video (string movieTitle, string movieRating, string movieRatingLevel, string movieRatingDescription, string movieReleaseYear, string movieRatingScore, string movieRatingSize){
  title = movieTitle;
  rating = movieRating;
  ratingLevel = movieRatingLevel;
  ratingDescription = movieRatingDescription;
  releaseYear = movieReleaseYear;
  userRatingScore = movieRatingScore;
  userRatingSize = movieRatingSize;
}

//Mutator
void Video::setVideoInfo(string movieTitle, string movieRating, string movieRatingLevel, string movieRatingDescription, string movieReleaseYear, string movieRatingScore, string movieRatingSize) {
  title = movieTitle;
  rating = movieRating;
  ratingLevel = movieRatingLevel;
  ratingDescription = movieRatingDescription;
  releaseYear = movieReleaseYear;
  userRatingScore = movieRatingScore;
  userRatingSize = movieRatingSize;
  return;
}

//Accessors
string Video::getTitle() const {
  return title;
}

string Video::getRating() const {
  return rating;
}

string Video::getRatingLevel() const {
  return ratingLevel;
}

string Video::getRatingDescription() const {
  return ratingDescription;
}

string Video::getReleaseYear() const {
  return releaseYear;
}

string Video::getUserRatingScore() const {
  return userRatingScore;
}

string Video::getUserRatingSize() const {
  return userRatingSize;
}
