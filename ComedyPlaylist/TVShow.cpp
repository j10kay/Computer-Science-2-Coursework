#include <iostream>
#include <iomanip>
using namespace std;

#include "Video.h"
#include "TVShow.h"

TVShow::TVShow (){      //Default constructor

  videoName = "None";
  userRating = "None";
  videoRating = "None";
  year = "None";
  videoDuration = 0;
  videoType = "None";
  season = "None";
  episode = "None";

}

TVShow::TVShow (string title, string genre, int duration, string UserRating, string vidRating, string Year){  //nondefault constructor

  videoName = title;
  userRating = UserRating;
  videoRating = vidRating;
  year = Year;
  videoDuration = duration;
  videoType = genre;
  season = "None";
  episode = "None";
}

void TVShow::PrintItem(){
  cout << left << setw(41) << videoName<< videoType << " " << videoDuration 
  << "        " << videoRating << "         " << userRating << "  "<< year;
  if (year != "")
   cout << endl;
}
