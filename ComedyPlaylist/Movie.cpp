#include <iostream>
using namespace std;

#include "Video.h"
#include "Movie.h"

Movie::Movie (){      //Default constructor

  videoName = "None";
  userRating = "None";
  videoRating = "None";
  year = "None";
  videoDuration = 0;
  videoType = "None";
  has_sequel = false;
}

Movie::Movie (string title, string genre, int duration, string UserRating, string vidRating, string Year){  //nondefault constructor

  videoName = title;
  userRating = UserRating;
  videoRating = vidRating;
  year = Year;
  videoDuration = duration;
  videoType = genre;
  
}

void Movie::PrintItem(){
cout << videoName << "    " << videoType << "    " << videoDuration << "   " << userRating << "      " << videoRating << "  "<< year << endl;
}

