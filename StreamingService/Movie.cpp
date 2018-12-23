#include <iostream>
using namespace std;

#include "Video.h"
#include "Movie.h"

Movie::Movie (){      //Default constructor

  videoName = "None";
  rating = "None";
  streamingService = "None";
  videoDuration = 0;
  videoType = "None";
  has_sequel = false;
}

Movie::Movie (string vidName, int vidDuration, string vidRating, string vidType, string vidStreamingService){  //nondefault constructor

  videoName = vidName;
  rating = vidRating;
  streamingService = vidStreamingService;
  videoDuration = vidDuration;
  videoType = vidType;
}

void Movie::PrintItem(){
cout << "Added:" << endl;
cout << videoName << endl;
cout << "Type: " << "Movie" << endl;
cout << "Genre: " << videoType << endl;
cout << "Duration: " << videoDuration << " minutes" << endl;
cout << "Rating: " << rating << endl;
cout << "Streaming Service: " << streamingService << "e" << endl;
}

